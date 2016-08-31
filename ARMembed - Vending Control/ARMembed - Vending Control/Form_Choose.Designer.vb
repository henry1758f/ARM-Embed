<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Form_Choose
    Inherits System.Windows.Forms.Form

    'Form 覆寫 Dispose 以清除元件清單。
    <System.Diagnostics.DebuggerNonUserCode()>
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
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.DataGridView1 = New System.Windows.Forms.DataGridView()
        Me.ARM_IOTVMDataSet = New ARMembed___Vending_Control.ARM_IOTVMDataSet()
        Me.CommoditySheetBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.Commodity_SheetTableAdapter = New ARMembed___Vending_Control.ARM_IOTVMDataSetTableAdapters.Commodity_SheetTableAdapter()
        Me.識別碼DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.商品名稱DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.商品出處DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.商品服務電話DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.商品價格DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.商品上架日期DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.DataGridView2 = New System.Windows.Forms.DataGridView()
        Me.UserSheetBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.User_SheetTableAdapter = New ARMembed___Vending_Control.ARM_IOTVMDataSetTableAdapters.User_SheetTableAdapter()
        Me.UserIDDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.UserAccountDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.UserNameDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.UserPasswordDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.UserBPDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.UserMoneyDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.UserCouponDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.BuyID1DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.BuyID2DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.BuyID3DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.GroupBox3 = New System.Windows.Forms.GroupBox()
        Me.DataGridView3 = New System.Windows.Forms.DataGridView()
        Me.VendingMachineSheetBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.Vending_Machine_SheetTableAdapter = New ARMembed___Vending_Control.ARM_IOTVMDataSetTableAdapters.Vending_Machine_SheetTableAdapter()
        Me.VMIDDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMNUMDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMNAMEDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMLATDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMLONDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMKINDNUMDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMUPDATEDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock1DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock1NUMDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock1PRIDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock2DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock2NUMDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock2PRIDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock3DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock3NUMDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock3PRIDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock4DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock4NUMDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock4PRIDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock5DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock5NUMDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock5PRIDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock6DataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock6NUMDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMBlock6PRIDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMSTATUSDataGridViewCheckBoxColumn = New System.Windows.Forms.DataGridViewCheckBoxColumn()
        Me.VMTEMPDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMETEMPDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.VMCMDataGridViewTextBoxColumn = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.GroupBox1.SuspendLayout()
        CType(Me.DataGridView1, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.ARM_IOTVMDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.CommoditySheetBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.GroupBox2.SuspendLayout()
        CType(Me.DataGridView2, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.UserSheetBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.GroupBox3.SuspendLayout()
        CType(Me.DataGridView3, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.VendingMachineSheetBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.DataGridView1)
        Me.GroupBox1.Location = New System.Drawing.Point(41, 30)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(802, 144)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Commodity Sheet on SQL Server"
        '
        'DataGridView1
        '
        Me.DataGridView1.AutoGenerateColumns = False
        Me.DataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize
        Me.DataGridView1.Columns.AddRange(New System.Windows.Forms.DataGridViewColumn() {Me.識別碼DataGridViewTextBoxColumn, Me.商品名稱DataGridViewTextBoxColumn, Me.商品出處DataGridViewTextBoxColumn, Me.商品服務電話DataGridViewTextBoxColumn, Me.商品價格DataGridViewTextBoxColumn, Me.商品上架日期DataGridViewTextBoxColumn})
        Me.DataGridView1.DataSource = Me.CommoditySheetBindingSource
        Me.DataGridView1.Location = New System.Drawing.Point(6, 37)
        Me.DataGridView1.Name = "DataGridView1"
        Me.DataGridView1.RowTemplate.Height = 27
        Me.DataGridView1.Size = New System.Drawing.Size(771, 76)
        Me.DataGridView1.TabIndex = 0
        '
        'ARM_IOTVMDataSet
        '
        Me.ARM_IOTVMDataSet.DataSetName = "ARM_IOTVMDataSet"
        Me.ARM_IOTVMDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'CommoditySheetBindingSource
        '
        Me.CommoditySheetBindingSource.DataMember = "Commodity_Sheet"
        Me.CommoditySheetBindingSource.DataSource = Me.ARM_IOTVMDataSet
        '
        'Commodity_SheetTableAdapter
        '
        Me.Commodity_SheetTableAdapter.ClearBeforeFill = True
        '
        '識別碼DataGridViewTextBoxColumn
        '
        Me.識別碼DataGridViewTextBoxColumn.DataPropertyName = "識別碼"
        Me.識別碼DataGridViewTextBoxColumn.HeaderText = "識別碼"
        Me.識別碼DataGridViewTextBoxColumn.Name = "識別碼DataGridViewTextBoxColumn"
        Me.識別碼DataGridViewTextBoxColumn.ReadOnly = True
        '
        '商品名稱DataGridViewTextBoxColumn
        '
        Me.商品名稱DataGridViewTextBoxColumn.DataPropertyName = "商品名稱"
        Me.商品名稱DataGridViewTextBoxColumn.HeaderText = "商品名稱"
        Me.商品名稱DataGridViewTextBoxColumn.Name = "商品名稱DataGridViewTextBoxColumn"
        '
        '商品出處DataGridViewTextBoxColumn
        '
        Me.商品出處DataGridViewTextBoxColumn.DataPropertyName = "商品出處"
        Me.商品出處DataGridViewTextBoxColumn.HeaderText = "商品出處"
        Me.商品出處DataGridViewTextBoxColumn.Name = "商品出處DataGridViewTextBoxColumn"
        '
        '商品服務電話DataGridViewTextBoxColumn
        '
        Me.商品服務電話DataGridViewTextBoxColumn.DataPropertyName = "商品服務電話"
        Me.商品服務電話DataGridViewTextBoxColumn.HeaderText = "商品服務電話"
        Me.商品服務電話DataGridViewTextBoxColumn.Name = "商品服務電話DataGridViewTextBoxColumn"
        '
        '商品價格DataGridViewTextBoxColumn
        '
        Me.商品價格DataGridViewTextBoxColumn.DataPropertyName = "商品價格"
        Me.商品價格DataGridViewTextBoxColumn.HeaderText = "商品價格"
        Me.商品價格DataGridViewTextBoxColumn.Name = "商品價格DataGridViewTextBoxColumn"
        '
        '商品上架日期DataGridViewTextBoxColumn
        '
        Me.商品上架日期DataGridViewTextBoxColumn.DataPropertyName = "商品上架日期"
        Me.商品上架日期DataGridViewTextBoxColumn.HeaderText = "商品上架日期"
        Me.商品上架日期DataGridViewTextBoxColumn.Name = "商品上架日期DataGridViewTextBoxColumn"
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.DataGridView2)
        Me.GroupBox2.Location = New System.Drawing.Point(41, 180)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(1256, 265)
        Me.GroupBox2.TabIndex = 1
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "User Sheet on SQL Server"
        '
        'DataGridView2
        '
        Me.DataGridView2.AutoGenerateColumns = False
        Me.DataGridView2.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize
        Me.DataGridView2.Columns.AddRange(New System.Windows.Forms.DataGridViewColumn() {Me.UserIDDataGridViewTextBoxColumn, Me.UserAccountDataGridViewTextBoxColumn, Me.UserNameDataGridViewTextBoxColumn, Me.UserPasswordDataGridViewTextBoxColumn, Me.UserBPDataGridViewTextBoxColumn, Me.UserMoneyDataGridViewTextBoxColumn, Me.UserCouponDataGridViewTextBoxColumn, Me.BuyID1DataGridViewTextBoxColumn, Me.BuyID2DataGridViewTextBoxColumn, Me.BuyID3DataGridViewTextBoxColumn})
        Me.DataGridView2.DataSource = Me.UserSheetBindingSource
        Me.DataGridView2.Location = New System.Drawing.Point(6, 37)
        Me.DataGridView2.Name = "DataGridView2"
        Me.DataGridView2.RowTemplate.Height = 27
        Me.DataGridView2.Size = New System.Drawing.Size(1244, 150)
        Me.DataGridView2.TabIndex = 0
        '
        'UserSheetBindingSource
        '
        Me.UserSheetBindingSource.DataMember = "User_Sheet"
        Me.UserSheetBindingSource.DataSource = Me.ARM_IOTVMDataSet
        '
        'User_SheetTableAdapter
        '
        Me.User_SheetTableAdapter.ClearBeforeFill = True
        '
        'UserIDDataGridViewTextBoxColumn
        '
        Me.UserIDDataGridViewTextBoxColumn.DataPropertyName = "User_ID"
        Me.UserIDDataGridViewTextBoxColumn.HeaderText = "User_ID"
        Me.UserIDDataGridViewTextBoxColumn.Name = "UserIDDataGridViewTextBoxColumn"
        '
        'UserAccountDataGridViewTextBoxColumn
        '
        Me.UserAccountDataGridViewTextBoxColumn.DataPropertyName = "User_Account"
        Me.UserAccountDataGridViewTextBoxColumn.HeaderText = "User_Account"
        Me.UserAccountDataGridViewTextBoxColumn.Name = "UserAccountDataGridViewTextBoxColumn"
        '
        'UserNameDataGridViewTextBoxColumn
        '
        Me.UserNameDataGridViewTextBoxColumn.DataPropertyName = "User_Name"
        Me.UserNameDataGridViewTextBoxColumn.HeaderText = "User_Name"
        Me.UserNameDataGridViewTextBoxColumn.Name = "UserNameDataGridViewTextBoxColumn"
        '
        'UserPasswordDataGridViewTextBoxColumn
        '
        Me.UserPasswordDataGridViewTextBoxColumn.DataPropertyName = "User_Password"
        Me.UserPasswordDataGridViewTextBoxColumn.HeaderText = "User_Password"
        Me.UserPasswordDataGridViewTextBoxColumn.Name = "UserPasswordDataGridViewTextBoxColumn"
        '
        'UserBPDataGridViewTextBoxColumn
        '
        Me.UserBPDataGridViewTextBoxColumn.DataPropertyName = "User_BP"
        Me.UserBPDataGridViewTextBoxColumn.HeaderText = "User_BP"
        Me.UserBPDataGridViewTextBoxColumn.Name = "UserBPDataGridViewTextBoxColumn"
        '
        'UserMoneyDataGridViewTextBoxColumn
        '
        Me.UserMoneyDataGridViewTextBoxColumn.DataPropertyName = "User_Money"
        Me.UserMoneyDataGridViewTextBoxColumn.HeaderText = "User_Money"
        Me.UserMoneyDataGridViewTextBoxColumn.Name = "UserMoneyDataGridViewTextBoxColumn"
        '
        'UserCouponDataGridViewTextBoxColumn
        '
        Me.UserCouponDataGridViewTextBoxColumn.DataPropertyName = "User_Coupon"
        Me.UserCouponDataGridViewTextBoxColumn.HeaderText = "User_Coupon"
        Me.UserCouponDataGridViewTextBoxColumn.Name = "UserCouponDataGridViewTextBoxColumn"
        '
        'BuyID1DataGridViewTextBoxColumn
        '
        Me.BuyID1DataGridViewTextBoxColumn.DataPropertyName = "BuyID_1"
        Me.BuyID1DataGridViewTextBoxColumn.HeaderText = "BuyID_1"
        Me.BuyID1DataGridViewTextBoxColumn.Name = "BuyID1DataGridViewTextBoxColumn"
        '
        'BuyID2DataGridViewTextBoxColumn
        '
        Me.BuyID2DataGridViewTextBoxColumn.DataPropertyName = "BuyID_2"
        Me.BuyID2DataGridViewTextBoxColumn.HeaderText = "BuyID_2"
        Me.BuyID2DataGridViewTextBoxColumn.Name = "BuyID2DataGridViewTextBoxColumn"
        '
        'BuyID3DataGridViewTextBoxColumn
        '
        Me.BuyID3DataGridViewTextBoxColumn.DataPropertyName = "BuyID_3"
        Me.BuyID3DataGridViewTextBoxColumn.HeaderText = "BuyID_3"
        Me.BuyID3DataGridViewTextBoxColumn.Name = "BuyID3DataGridViewTextBoxColumn"
        '
        'GroupBox3
        '
        Me.GroupBox3.Controls.Add(Me.DataGridView3)
        Me.GroupBox3.Location = New System.Drawing.Point(32, 451)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(1259, 265)
        Me.GroupBox3.TabIndex = 2
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Vending Mechine Sheet on SQL Server"
        '
        'DataGridView3
        '
        Me.DataGridView3.AutoGenerateColumns = False
        Me.DataGridView3.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize
        Me.DataGridView3.Columns.AddRange(New System.Windows.Forms.DataGridViewColumn() {Me.VMIDDataGridViewTextBoxColumn, Me.VMNUMDataGridViewTextBoxColumn, Me.VMNAMEDataGridViewTextBoxColumn, Me.VMLATDataGridViewTextBoxColumn, Me.VMLONDataGridViewTextBoxColumn, Me.VMKINDNUMDataGridViewTextBoxColumn, Me.VMUPDATEDataGridViewTextBoxColumn, Me.VMBlock1DataGridViewTextBoxColumn, Me.VMBlock1NUMDataGridViewTextBoxColumn, Me.VMBlock1PRIDataGridViewTextBoxColumn, Me.VMBlock2DataGridViewTextBoxColumn, Me.VMBlock2NUMDataGridViewTextBoxColumn, Me.VMBlock2PRIDataGridViewTextBoxColumn, Me.VMBlock3DataGridViewTextBoxColumn, Me.VMBlock3NUMDataGridViewTextBoxColumn, Me.VMBlock3PRIDataGridViewTextBoxColumn, Me.VMBlock4DataGridViewTextBoxColumn, Me.VMBlock4NUMDataGridViewTextBoxColumn, Me.VMBlock4PRIDataGridViewTextBoxColumn, Me.VMBlock5DataGridViewTextBoxColumn, Me.VMBlock5NUMDataGridViewTextBoxColumn, Me.VMBlock5PRIDataGridViewTextBoxColumn, Me.VMBlock6DataGridViewTextBoxColumn, Me.VMBlock6NUMDataGridViewTextBoxColumn, Me.VMBlock6PRIDataGridViewTextBoxColumn, Me.VMSTATUSDataGridViewCheckBoxColumn, Me.VMTEMPDataGridViewTextBoxColumn, Me.VMETEMPDataGridViewTextBoxColumn, Me.VMCMDataGridViewTextBoxColumn})
        Me.DataGridView3.DataSource = Me.VendingMachineSheetBindingSource
        Me.DataGridView3.Location = New System.Drawing.Point(6, 37)
        Me.DataGridView3.Name = "DataGridView3"
        Me.DataGridView3.RowTemplate.Height = 27
        Me.DataGridView3.Size = New System.Drawing.Size(1247, 150)
        Me.DataGridView3.TabIndex = 0
        '
        'VendingMachineSheetBindingSource
        '
        Me.VendingMachineSheetBindingSource.DataMember = "Vending Machine_Sheet"
        Me.VendingMachineSheetBindingSource.DataSource = Me.ARM_IOTVMDataSet
        '
        'Vending_Machine_SheetTableAdapter
        '
        Me.Vending_Machine_SheetTableAdapter.ClearBeforeFill = True
        '
        'VMIDDataGridViewTextBoxColumn
        '
        Me.VMIDDataGridViewTextBoxColumn.DataPropertyName = "VM_ID"
        Me.VMIDDataGridViewTextBoxColumn.HeaderText = "VM_ID"
        Me.VMIDDataGridViewTextBoxColumn.Name = "VMIDDataGridViewTextBoxColumn"
        Me.VMIDDataGridViewTextBoxColumn.ReadOnly = True
        '
        'VMNUMDataGridViewTextBoxColumn
        '
        Me.VMNUMDataGridViewTextBoxColumn.DataPropertyName = "VM_NUM"
        Me.VMNUMDataGridViewTextBoxColumn.HeaderText = "VM_NUM"
        Me.VMNUMDataGridViewTextBoxColumn.Name = "VMNUMDataGridViewTextBoxColumn"
        '
        'VMNAMEDataGridViewTextBoxColumn
        '
        Me.VMNAMEDataGridViewTextBoxColumn.DataPropertyName = "VM_NAME"
        Me.VMNAMEDataGridViewTextBoxColumn.HeaderText = "VM_NAME"
        Me.VMNAMEDataGridViewTextBoxColumn.Name = "VMNAMEDataGridViewTextBoxColumn"
        '
        'VMLATDataGridViewTextBoxColumn
        '
        Me.VMLATDataGridViewTextBoxColumn.DataPropertyName = "VM_LAT"
        Me.VMLATDataGridViewTextBoxColumn.HeaderText = "VM_LAT"
        Me.VMLATDataGridViewTextBoxColumn.Name = "VMLATDataGridViewTextBoxColumn"
        '
        'VMLONDataGridViewTextBoxColumn
        '
        Me.VMLONDataGridViewTextBoxColumn.DataPropertyName = "VM_LON"
        Me.VMLONDataGridViewTextBoxColumn.HeaderText = "VM_LON"
        Me.VMLONDataGridViewTextBoxColumn.Name = "VMLONDataGridViewTextBoxColumn"
        '
        'VMKINDNUMDataGridViewTextBoxColumn
        '
        Me.VMKINDNUMDataGridViewTextBoxColumn.DataPropertyName = "VM_KINDNUM"
        Me.VMKINDNUMDataGridViewTextBoxColumn.HeaderText = "VM_KINDNUM"
        Me.VMKINDNUMDataGridViewTextBoxColumn.Name = "VMKINDNUMDataGridViewTextBoxColumn"
        '
        'VMUPDATEDataGridViewTextBoxColumn
        '
        Me.VMUPDATEDataGridViewTextBoxColumn.DataPropertyName = "VM_UPDATE"
        Me.VMUPDATEDataGridViewTextBoxColumn.HeaderText = "VM_UPDATE"
        Me.VMUPDATEDataGridViewTextBoxColumn.Name = "VMUPDATEDataGridViewTextBoxColumn"
        '
        'VMBlock1DataGridViewTextBoxColumn
        '
        Me.VMBlock1DataGridViewTextBoxColumn.DataPropertyName = "VM_Block1"
        Me.VMBlock1DataGridViewTextBoxColumn.HeaderText = "VM_Block1"
        Me.VMBlock1DataGridViewTextBoxColumn.Name = "VMBlock1DataGridViewTextBoxColumn"
        '
        'VMBlock1NUMDataGridViewTextBoxColumn
        '
        Me.VMBlock1NUMDataGridViewTextBoxColumn.DataPropertyName = "VM_Block1_NUM"
        Me.VMBlock1NUMDataGridViewTextBoxColumn.HeaderText = "VM_Block1_NUM"
        Me.VMBlock1NUMDataGridViewTextBoxColumn.Name = "VMBlock1NUMDataGridViewTextBoxColumn"
        '
        'VMBlock1PRIDataGridViewTextBoxColumn
        '
        Me.VMBlock1PRIDataGridViewTextBoxColumn.DataPropertyName = "VM_Block1_PRI"
        Me.VMBlock1PRIDataGridViewTextBoxColumn.HeaderText = "VM_Block1_PRI"
        Me.VMBlock1PRIDataGridViewTextBoxColumn.Name = "VMBlock1PRIDataGridViewTextBoxColumn"
        '
        'VMBlock2DataGridViewTextBoxColumn
        '
        Me.VMBlock2DataGridViewTextBoxColumn.DataPropertyName = "VM_Block2"
        Me.VMBlock2DataGridViewTextBoxColumn.HeaderText = "VM_Block2"
        Me.VMBlock2DataGridViewTextBoxColumn.Name = "VMBlock2DataGridViewTextBoxColumn"
        '
        'VMBlock2NUMDataGridViewTextBoxColumn
        '
        Me.VMBlock2NUMDataGridViewTextBoxColumn.DataPropertyName = "VM_Block2_NUM"
        Me.VMBlock2NUMDataGridViewTextBoxColumn.HeaderText = "VM_Block2_NUM"
        Me.VMBlock2NUMDataGridViewTextBoxColumn.Name = "VMBlock2NUMDataGridViewTextBoxColumn"
        '
        'VMBlock2PRIDataGridViewTextBoxColumn
        '
        Me.VMBlock2PRIDataGridViewTextBoxColumn.DataPropertyName = "VM_Block2_PRI"
        Me.VMBlock2PRIDataGridViewTextBoxColumn.HeaderText = "VM_Block2_PRI"
        Me.VMBlock2PRIDataGridViewTextBoxColumn.Name = "VMBlock2PRIDataGridViewTextBoxColumn"
        '
        'VMBlock3DataGridViewTextBoxColumn
        '
        Me.VMBlock3DataGridViewTextBoxColumn.DataPropertyName = "VM_Block3"
        Me.VMBlock3DataGridViewTextBoxColumn.HeaderText = "VM_Block3"
        Me.VMBlock3DataGridViewTextBoxColumn.Name = "VMBlock3DataGridViewTextBoxColumn"
        '
        'VMBlock3NUMDataGridViewTextBoxColumn
        '
        Me.VMBlock3NUMDataGridViewTextBoxColumn.DataPropertyName = "VM_Block3_NUM"
        Me.VMBlock3NUMDataGridViewTextBoxColumn.HeaderText = "VM_Block3_NUM"
        Me.VMBlock3NUMDataGridViewTextBoxColumn.Name = "VMBlock3NUMDataGridViewTextBoxColumn"
        '
        'VMBlock3PRIDataGridViewTextBoxColumn
        '
        Me.VMBlock3PRIDataGridViewTextBoxColumn.DataPropertyName = "VM_Block3_PRI"
        Me.VMBlock3PRIDataGridViewTextBoxColumn.HeaderText = "VM_Block3_PRI"
        Me.VMBlock3PRIDataGridViewTextBoxColumn.Name = "VMBlock3PRIDataGridViewTextBoxColumn"
        '
        'VMBlock4DataGridViewTextBoxColumn
        '
        Me.VMBlock4DataGridViewTextBoxColumn.DataPropertyName = "VM_Block4"
        Me.VMBlock4DataGridViewTextBoxColumn.HeaderText = "VM_Block4"
        Me.VMBlock4DataGridViewTextBoxColumn.Name = "VMBlock4DataGridViewTextBoxColumn"
        '
        'VMBlock4NUMDataGridViewTextBoxColumn
        '
        Me.VMBlock4NUMDataGridViewTextBoxColumn.DataPropertyName = "VM_Block4_NUM"
        Me.VMBlock4NUMDataGridViewTextBoxColumn.HeaderText = "VM_Block4_NUM"
        Me.VMBlock4NUMDataGridViewTextBoxColumn.Name = "VMBlock4NUMDataGridViewTextBoxColumn"
        '
        'VMBlock4PRIDataGridViewTextBoxColumn
        '
        Me.VMBlock4PRIDataGridViewTextBoxColumn.DataPropertyName = "VM_Block4_PRI"
        Me.VMBlock4PRIDataGridViewTextBoxColumn.HeaderText = "VM_Block4_PRI"
        Me.VMBlock4PRIDataGridViewTextBoxColumn.Name = "VMBlock4PRIDataGridViewTextBoxColumn"
        '
        'VMBlock5DataGridViewTextBoxColumn
        '
        Me.VMBlock5DataGridViewTextBoxColumn.DataPropertyName = "VM_Block5"
        Me.VMBlock5DataGridViewTextBoxColumn.HeaderText = "VM_Block5"
        Me.VMBlock5DataGridViewTextBoxColumn.Name = "VMBlock5DataGridViewTextBoxColumn"
        '
        'VMBlock5NUMDataGridViewTextBoxColumn
        '
        Me.VMBlock5NUMDataGridViewTextBoxColumn.DataPropertyName = "VM_Block5_NUM"
        Me.VMBlock5NUMDataGridViewTextBoxColumn.HeaderText = "VM_Block5_NUM"
        Me.VMBlock5NUMDataGridViewTextBoxColumn.Name = "VMBlock5NUMDataGridViewTextBoxColumn"
        '
        'VMBlock5PRIDataGridViewTextBoxColumn
        '
        Me.VMBlock5PRIDataGridViewTextBoxColumn.DataPropertyName = "VM_Block5_PRI"
        Me.VMBlock5PRIDataGridViewTextBoxColumn.HeaderText = "VM_Block5_PRI"
        Me.VMBlock5PRIDataGridViewTextBoxColumn.Name = "VMBlock5PRIDataGridViewTextBoxColumn"
        '
        'VMBlock6DataGridViewTextBoxColumn
        '
        Me.VMBlock6DataGridViewTextBoxColumn.DataPropertyName = "VM_Block6"
        Me.VMBlock6DataGridViewTextBoxColumn.HeaderText = "VM_Block6"
        Me.VMBlock6DataGridViewTextBoxColumn.Name = "VMBlock6DataGridViewTextBoxColumn"
        '
        'VMBlock6NUMDataGridViewTextBoxColumn
        '
        Me.VMBlock6NUMDataGridViewTextBoxColumn.DataPropertyName = "VM_Block6_NUM"
        Me.VMBlock6NUMDataGridViewTextBoxColumn.HeaderText = "VM_Block6_NUM"
        Me.VMBlock6NUMDataGridViewTextBoxColumn.Name = "VMBlock6NUMDataGridViewTextBoxColumn"
        '
        'VMBlock6PRIDataGridViewTextBoxColumn
        '
        Me.VMBlock6PRIDataGridViewTextBoxColumn.DataPropertyName = "VM_Block6_PRI"
        Me.VMBlock6PRIDataGridViewTextBoxColumn.HeaderText = "VM_Block6_PRI"
        Me.VMBlock6PRIDataGridViewTextBoxColumn.Name = "VMBlock6PRIDataGridViewTextBoxColumn"
        '
        'VMSTATUSDataGridViewCheckBoxColumn
        '
        Me.VMSTATUSDataGridViewCheckBoxColumn.DataPropertyName = "VM_STATUS"
        Me.VMSTATUSDataGridViewCheckBoxColumn.HeaderText = "VM_STATUS"
        Me.VMSTATUSDataGridViewCheckBoxColumn.Name = "VMSTATUSDataGridViewCheckBoxColumn"
        '
        'VMTEMPDataGridViewTextBoxColumn
        '
        Me.VMTEMPDataGridViewTextBoxColumn.DataPropertyName = "VM_TEMP"
        Me.VMTEMPDataGridViewTextBoxColumn.HeaderText = "VM_TEMP"
        Me.VMTEMPDataGridViewTextBoxColumn.Name = "VMTEMPDataGridViewTextBoxColumn"
        '
        'VMETEMPDataGridViewTextBoxColumn
        '
        Me.VMETEMPDataGridViewTextBoxColumn.DataPropertyName = "VM_ETEMP"
        Me.VMETEMPDataGridViewTextBoxColumn.HeaderText = "VM_ETEMP"
        Me.VMETEMPDataGridViewTextBoxColumn.Name = "VMETEMPDataGridViewTextBoxColumn"
        '
        'VMCMDataGridViewTextBoxColumn
        '
        Me.VMCMDataGridViewTextBoxColumn.DataPropertyName = "VM_CM"
        Me.VMCMDataGridViewTextBoxColumn.HeaderText = "VM_CM"
        Me.VMCMDataGridViewTextBoxColumn.Name = "VMCMDataGridViewTextBoxColumn"
        '
        'Form_Choose
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(1327, 739)
        Me.Controls.Add(Me.GroupBox3)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox1)
        Me.Name = "Form_Choose"
        Me.Text = "Form_Choose"
        Me.GroupBox1.ResumeLayout(False)
        CType(Me.DataGridView1, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.ARM_IOTVMDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.CommoditySheetBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        Me.GroupBox2.ResumeLayout(False)
        CType(Me.DataGridView2, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.UserSheetBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        Me.GroupBox3.ResumeLayout(False)
        CType(Me.DataGridView3, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.VendingMachineSheetBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents GroupBox1 As GroupBox
    Friend WithEvents DataGridView1 As DataGridView
    Friend WithEvents ARM_IOTVMDataSet As ARM_IOTVMDataSet
    Friend WithEvents CommoditySheetBindingSource As BindingSource
    Friend WithEvents Commodity_SheetTableAdapter As ARM_IOTVMDataSetTableAdapters.Commodity_SheetTableAdapter
    Friend WithEvents 識別碼DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents 商品名稱DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents 商品出處DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents 商品服務電話DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents 商品價格DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents 商品上架日期DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents GroupBox2 As GroupBox
    Friend WithEvents DataGridView2 As DataGridView
    Friend WithEvents UserSheetBindingSource As BindingSource
    Friend WithEvents User_SheetTableAdapter As ARM_IOTVMDataSetTableAdapters.User_SheetTableAdapter
    Friend WithEvents UserIDDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents UserAccountDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents UserNameDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents UserPasswordDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents UserBPDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents UserMoneyDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents UserCouponDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents BuyID1DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents BuyID2DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents BuyID3DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents GroupBox3 As GroupBox
    Friend WithEvents DataGridView3 As DataGridView
    Friend WithEvents VendingMachineSheetBindingSource As BindingSource
    Friend WithEvents Vending_Machine_SheetTableAdapter As ARM_IOTVMDataSetTableAdapters.Vending_Machine_SheetTableAdapter
    Friend WithEvents VMIDDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMNUMDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMNAMEDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMLATDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMLONDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMKINDNUMDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMUPDATEDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock1DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock1NUMDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock1PRIDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock2DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock2NUMDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock2PRIDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock3DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock3NUMDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock3PRIDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock4DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock4NUMDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock4PRIDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock5DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock5NUMDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock5PRIDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock6DataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock6NUMDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMBlock6PRIDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMSTATUSDataGridViewCheckBoxColumn As DataGridViewCheckBoxColumn
    Friend WithEvents VMTEMPDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMETEMPDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
    Friend WithEvents VMCMDataGridViewTextBoxColumn As DataGridViewTextBoxColumn
End Class
