import sys
from PyQt5.QtWidgets import QApplication, QWidget

app = QApplication(sys.argv)

w = QWidget()
w.setGeometry(50,50,500,500)
w.setWindowTitle("SaentisCoin - Empty Wallet")
w.show()
sys.exit(app.exec_())
