<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form_Login
    Inherits System.Windows.Forms.Form

    'Form 覆寫 Dispose 以清除元件清單。
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    '為 Windows Form 設計工具的必要項
    Private components As System.ComponentModel.IContainer

    '注意: 以下為 Windows Form 設計工具所需的程序
    '可以使用 Windows Form 設計工具進行修改。
    '請勿使用程式碼編輯器進行修改。
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Label_Title = New System.Windows.Forms.Label()
        Me.TextBox_Account = New System.Windows.Forms.TextBox()
        Me.TextBox_Password = New System.Windows.Forms.TextBox()
        Me.Label_Account = New System.Windows.Forms.Label()
        Me.Label_Password = New System.Windows.Forms.Label()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'Label_Title
        '
        Me.Label_Title.AutoSize = True
        Me.Label_Title.Font = New System.Drawing.Font("微軟正黑體", 28.2!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(136, Byte))
        Me.Label_Title.Location = New System.Drawing.Point(12, 9)
        Me.Label_Title.Name = "Label_Title"
        Me.Label_Title.Size = New System.Drawing.Size(699, 61)
        Me.Label_Title.TabIndex = 0
        Me.Label_Title.Text = "牽動商機務聯網販賣機主控系統"
        '
        'TextBox_Account
        '
        Me.TextBox_Account.Font = New System.Drawing.Font("新細明體", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(136, Byte))
        Me.TextBox_Account.Location = New System.Drawing.Point(301, 95)
        Me.TextBox_Account.Name = "TextBox_Account"
        Me.TextBox_Account.Size = New System.Drawing.Size(186, 31)
        Me.TextBox_Account.TabIndex = 1
        Me.TextBox_Account.WordWrap = False
        '
        'TextBox_Password
        '
        Me.TextBox_Password.Font = New System.Drawing.Font("新細明體", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(136, Byte))
        Me.TextBox_Password.Location = New System.Drawing.Point(301, 146)
        Me.TextBox_Password.Name = "TextBox_Password"
        Me.TextBox_Password.Size = New System.Drawing.Size(186, 31)
        Me.TextBox_Password.TabIndex = 2
        Me.TextBox_Password.UseSystemPasswordChar = True
        Me.TextBox_Password.WordWrap = False
        '
        'Label_Account
        '
        Me.Label_Account.AutoSize = True
        Me.Label_Account.Font = New System.Drawing.Font("微軟正黑體", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(136, Byte))
        Me.Label_Account.Location = New System.Drawing.Point(188, 94)
        Me.Label_Account.Name = "Label_Account"
        Me.Label_Account.Size = New System.Drawing.Size(93, 25)
        Me.Label_Account.TabIndex = 3
        Me.Label_Account.Text = "Account"
        '
        'Label_Password
        '
        Me.Label_Password.AutoSize = True
        Me.Label_Password.Font = New System.Drawing.Font("微軟正黑體", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(136, Byte))
        Me.Label_Password.Location = New System.Drawing.Point(188, 146)
        Me.Label_Password.Name = "Label_Password"
        Me.Label_Password.Size = New System.Drawing.Size(104, 25)
        Me.Label_Password.TabIndex = 4
        Me.Label_Password.Text = "Password"
        '
        'Button1
        '
        Me.Button1.Font = New System.Drawing.Font("微軟正黑體", 18.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(136, Byte))
        Me.Button1.Location = New System.Drawing.Point(301, 212)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(150, 68)
        Me.Button1.TabIndex = 5
        Me.Button1.Text = "Login"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'Form_Login
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(728, 316)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.Label_Password)
        Me.Controls.Add(Me.Label_Account)
        Me.Controls.Add(Me.TextBox_Password)
        Me.Controls.Add(Me.TextBox_Account)
        Me.Controls.Add(Me.Label_Title)
        Me.Name = "Form_Login"
        Me.Text = "Login"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Label_Title As Label
    Friend WithEvents TextBox_Account As TextBox
    Friend WithEvents TextBox_Password As TextBox
    Friend WithEvents Label_Account As Label
    Friend WithEvents Label_Password As Label
    Friend WithEvents Button1 As Button
End Class
