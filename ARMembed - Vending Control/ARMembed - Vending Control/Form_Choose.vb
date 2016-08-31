Public Class Form_Choose
    Private Sub Form_Choose_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Dim LForm As New Form_Loading
        LForm.Show()
        LForm.Label1.Text = "我是暫時的標題"
        LForm.ProgressBar1.Value = 3
        LForm.Label2.Text = "Loading  ARM_IOTVMDataSet.Vending_Machine_Sheet ....."
        LForm.Refresh()

        Try
            'TODO: 這行程式碼會將資料載入 'ARM_IOTVMDataSet.Vending_Machine_Sheet' 資料表。您可以視需要進行移動或移除。
            Me.Vending_Machine_SheetTableAdapter.Fill(Me.ARM_IOTVMDataSet.Vending_Machine_Sheet)
            LForm.ProgressBar1.Value = 33
            LForm.Label2.Text = "Loading  ARM_IOTVMDataSet.User_Sheet ....."
            LForm.Refresh()
        Catch ex As Exception
            MsgBox(ErrorToString, MsgBoxStyle.Critical, "FAILD CONNECTION !")
        End Try
        Try
            'TODO: 這行程式碼會將資料載入 'ARM_IOTVMDataSet.User_Sheet' 資料表。您可以視需要進行移動或移除。
            Me.User_SheetTableAdapter.Fill(Me.ARM_IOTVMDataSet.User_Sheet)
            LForm.ProgressBar1.Value = 66
            LForm.Label2.Text = "Loading  ARM_IOTVMDataSet.Commodity_Sheet ....."
            LForm.Refresh()
        Catch ex As Exception
            MsgBox(ErrorToString, MsgBoxStyle.Critical, "FAILD CONNECTION !")
        End Try
        Try
            'TODO: 這行程式碼會將資料載入 'ARM_IOTVMDataSet.Commodity_Sheet' 資料表。您可以視需要進行移動或移除。
            Me.Commodity_SheetTableAdapter.Fill(Me.ARM_IOTVMDataSet.Commodity_Sheet)
            LForm.ProgressBar1.Value = 99
            LForm.Refresh()
        Catch ex As Exception
            MsgBox(ErrorToString, MsgBoxStyle.Critical, "FAILD CONNECTION !")
        End Try
        LForm.ProgressBar1.Value = 100
        LForm.Label2.Text = "Loading  COMPLETE ! "
        LForm.Refresh()
        MsgBox("Loading Completely ! ", MsgBoxStyle.Information, "SUCCESS")
        LForm.Close()

    End Sub
End Class