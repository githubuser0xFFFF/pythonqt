#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qthread.h>
#include <qwidget.h>
#include <qwindow.h>
#include <qwizard.h>



class PythonQtShell_QWizardPage : public QWizardPage
{
public:
    PythonQtShell_QWizardPage(QWidget*  parent = nullptr):QWizardPage(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWizardPage() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void cleanupPage() override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  Event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initializePage() override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
bool  isComplete() const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
int  nextId() const override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
bool  validatePage() override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWizardPage : public QWizardPage
{ public:
inline QVariant  promoted_field(const QString&  name) const { return this->field(name); }
inline void promoted_registerField(const QString&  name, QWidget*  widget, const char*  property = nullptr, const char*  changedSignal = nullptr) { this->registerField(name, widget, property, changedSignal); }
inline void promoted_setField(const QString&  name, const QVariant&  value) { this->setField(name, value); }
inline QWizard*  promoted_wizard() const { return this->wizard(); }
inline void py_q_cleanupPage() { QWizardPage::cleanupPage(); }
inline void py_q_initializePage() { QWizardPage::initializePage(); }
inline bool  py_q_isComplete() const { return QWizardPage::isComplete(); }
inline int  py_q_nextId() const { return QWizardPage::nextId(); }
inline bool  py_q_validatePage() { return QWizardPage::validatePage(); }
};

class PythonQtWrapper_QWizardPage : public QObject
{ Q_OBJECT
public:
public slots:
QWizardPage* new_QWizardPage(QWidget*  parent = nullptr);
void delete_QWizardPage(QWizardPage* obj) { delete obj; }
   QString  buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const;
   void cleanupPage(QWizardPage* theWrappedObject);
   void py_q_cleanupPage(QWizardPage* theWrappedObject){  (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_cleanupPage());}
   QVariant  field(QWizardPage* theWrappedObject, const QString&  name) const;
   void initializePage(QWizardPage* theWrappedObject);
   void py_q_initializePage(QWizardPage* theWrappedObject){  (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_initializePage());}
   bool  isCommitPage(QWizardPage* theWrappedObject) const;
   bool  isComplete(QWizardPage* theWrappedObject) const;
   bool  py_q_isComplete(QWizardPage* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_isComplete());}
   bool  isFinalPage(QWizardPage* theWrappedObject) const;
   int  nextId(QWizardPage* theWrappedObject) const;
   int  py_q_nextId(QWizardPage* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_nextId());}
   QPixmap  pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const;
   void registerField(QWizardPage* theWrappedObject, const QString&  name, QWidget*  widget, const char*  property = nullptr, const char*  changedSignal = nullptr);
   void setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setCommitPage(QWizardPage* theWrappedObject, bool  commitPage);
   void setField(QWizardPage* theWrappedObject, const QString&  name, const QVariant&  value);
   void setFinalPage(QWizardPage* theWrappedObject, bool  finalPage);
   void setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle);
   void setTitle(QWizardPage* theWrappedObject, const QString&  title);
   QString  subTitle(QWizardPage* theWrappedObject) const;
   QString  title(QWizardPage* theWrappedObject) const;
   bool  validatePage(QWizardPage* theWrappedObject);
   bool  py_q_validatePage(QWizardPage* theWrappedObject){  return (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_validatePage());}
   QWizard*  wizard(QWizardPage* theWrappedObject) const;
};


