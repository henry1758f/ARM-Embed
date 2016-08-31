Public Class Form_Login
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        Close()



    End Sub

    Private Sub Form_Login_FormClosing(sender As Object, e As FormClosingEventArgs) Handles MyBase.FormClosing
        Dim FormC As New Form_Choose
        Me.Visible = False
        FormC.ShowDialog()


    End Sub
End Class
