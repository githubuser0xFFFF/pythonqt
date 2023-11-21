#include <PythonQt.h>
#include <QIcon>
#include <QObject>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qeventpoint.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgesture.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputdevice.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpointingdevice.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstatictext.h>
#include <qstyle.h>
#include <qstyleditemdelegate.h>
#include <qstyleoption.h>
#include <qstylepainter.h>
#include <qstyleplugin.h>
#include <qsurface.h>
#include <qsurfaceformat.h>
#include <qsyntaxhighlighter.h>
#include <qsystemtrayicon.h>
#include <qtabbar.h>
#include <qtableview.h>
#include <qtablewidget.h>
#include <qtabwidget.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qthread.h>
#include <qtransform.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QStyleOptionProgressBar : public QStyleOptionProgressBar
{
public:
    PythonQtShell_QStyleOptionProgressBar():QStyleOptionProgressBar(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other):QStyleOptionProgressBar(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionProgressBar(int  version):QStyleOptionProgressBar(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionProgressBar();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionProgressBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionProgressBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionProgressBar::Version};
public slots:
QStyleOptionProgressBar* new_QStyleOptionProgressBar();
QStyleOptionProgressBar* new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other);
QStyleOptionProgressBar* new_QStyleOptionProgressBar(int  version);
void delete_QStyleOptionProgressBar(QStyleOptionProgressBar* obj) { delete obj; }
   QStyleOptionProgressBar*  operator_assign(QStyleOptionProgressBar* theWrappedObject, const QStyleOptionProgressBar&  arg__1);
void py_set_bottomToTop(QStyleOptionProgressBar* theWrappedObject, bool  bottomToTop){ theWrappedObject->bottomToTop = bottomToTop; }
bool  py_get_bottomToTop(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->bottomToTop; }
void py_set_invertedAppearance(QStyleOptionProgressBar* theWrappedObject, bool  invertedAppearance){ theWrappedObject->invertedAppearance = invertedAppearance; }
bool  py_get_invertedAppearance(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->invertedAppearance; }
void py_set_maximum(QStyleOptionProgressBar* theWrappedObject, int  maximum){ theWrappedObject->maximum = maximum; }
int  py_get_maximum(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->maximum; }
void py_set_minimum(QStyleOptionProgressBar* theWrappedObject, int  minimum){ theWrappedObject->minimum = minimum; }
int  py_get_minimum(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->minimum; }
void py_set_progress(QStyleOptionProgressBar* theWrappedObject, int  progress){ theWrappedObject->progress = progress; }
int  py_get_progress(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->progress; }
void py_set_text(QStyleOptionProgressBar* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionProgressBar* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->textAlignment; }
void py_set_textVisible(QStyleOptionProgressBar* theWrappedObject, bool  textVisible){ theWrappedObject->textVisible = textVisible; }
bool  py_get_textVisible(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->textVisible; }
};





class PythonQtShell_QStyleOptionRubberBand : public QStyleOptionRubberBand
{
public:
    PythonQtShell_QStyleOptionRubberBand():QStyleOptionRubberBand(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionRubberBand(const QStyleOptionRubberBand&  other):QStyleOptionRubberBand(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionRubberBand(int  version):QStyleOptionRubberBand(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionRubberBand();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionRubberBand : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionRubberBand::Type};
enum StyleOptionVersion{
  Version = QStyleOptionRubberBand::Version};
public slots:
QStyleOptionRubberBand* new_QStyleOptionRubberBand();
QStyleOptionRubberBand* new_QStyleOptionRubberBand(const QStyleOptionRubberBand&  other);
QStyleOptionRubberBand* new_QStyleOptionRubberBand(int  version);
void delete_QStyleOptionRubberBand(QStyleOptionRubberBand* obj) { delete obj; }
   QStyleOptionRubberBand*  operator_assign(QStyleOptionRubberBand* theWrappedObject, const QStyleOptionRubberBand&  arg__1);
void py_set_opaque(QStyleOptionRubberBand* theWrappedObject, bool  opaque){ theWrappedObject->opaque = opaque; }
bool  py_get_opaque(QStyleOptionRubberBand* theWrappedObject){ return theWrappedObject->opaque; }
void py_set_shape(QStyleOptionRubberBand* theWrappedObject, QRubberBand::Shape  shape){ theWrappedObject->shape = shape; }
QRubberBand::Shape  py_get_shape(QStyleOptionRubberBand* theWrappedObject){ return theWrappedObject->shape; }
};





class PythonQtShell_QStyleOptionSizeGrip : public QStyleOptionSizeGrip
{
public:
    PythonQtShell_QStyleOptionSizeGrip():QStyleOptionSizeGrip(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other):QStyleOptionSizeGrip(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSizeGrip(int  version):QStyleOptionSizeGrip(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionSizeGrip();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionSizeGrip : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSizeGrip::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSizeGrip::Version};
public slots:
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip();
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other);
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip(int  version);
void delete_QStyleOptionSizeGrip(QStyleOptionSizeGrip* obj) { delete obj; }
   QStyleOptionSizeGrip*  operator_assign(QStyleOptionSizeGrip* theWrappedObject, const QStyleOptionSizeGrip&  arg__1);
void py_set_corner(QStyleOptionSizeGrip* theWrappedObject, Qt::Corner  corner){ theWrappedObject->corner = corner; }
Qt::Corner  py_get_corner(QStyleOptionSizeGrip* theWrappedObject){ return theWrappedObject->corner; }
};





class PythonQtShell_QStyleOptionSlider : public QStyleOptionSlider
{
public:
    PythonQtShell_QStyleOptionSlider():QStyleOptionSlider(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSlider(const QStyleOptionSlider&  other):QStyleOptionSlider(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSlider(int  version):QStyleOptionSlider(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionSlider();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionSlider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSlider::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSlider::Version};
public slots:
QStyleOptionSlider* new_QStyleOptionSlider();
QStyleOptionSlider* new_QStyleOptionSlider(const QStyleOptionSlider&  other);
QStyleOptionSlider* new_QStyleOptionSlider(int  version);
void delete_QStyleOptionSlider(QStyleOptionSlider* obj) { delete obj; }
   QStyleOptionSlider*  operator_assign(QStyleOptionSlider* theWrappedObject, const QStyleOptionSlider&  arg__1);
void py_set_dialWrapping(QStyleOptionSlider* theWrappedObject, bool  dialWrapping){ theWrappedObject->dialWrapping = dialWrapping; }
bool  py_get_dialWrapping(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->dialWrapping; }
void py_set_keyboardModifiers(QStyleOptionSlider* theWrappedObject, Qt::KeyboardModifiers  keyboardModifiers){ theWrappedObject->keyboardModifiers = keyboardModifiers; }
Qt::KeyboardModifiers  py_get_keyboardModifiers(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->keyboardModifiers; }
void py_set_maximum(QStyleOptionSlider* theWrappedObject, int  maximum){ theWrappedObject->maximum = maximum; }
int  py_get_maximum(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->maximum; }
void py_set_minimum(QStyleOptionSlider* theWrappedObject, int  minimum){ theWrappedObject->minimum = minimum; }
int  py_get_minimum(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->minimum; }
void py_set_notchTarget(QStyleOptionSlider* theWrappedObject, qreal  notchTarget){ theWrappedObject->notchTarget = notchTarget; }
qreal  py_get_notchTarget(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->notchTarget; }
void py_set_orientation(QStyleOptionSlider* theWrappedObject, Qt::Orientation  orientation){ theWrappedObject->orientation = orientation; }
Qt::Orientation  py_get_orientation(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->orientation; }
void py_set_pageStep(QStyleOptionSlider* theWrappedObject, int  pageStep){ theWrappedObject->pageStep = pageStep; }
int  py_get_pageStep(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->pageStep; }
void py_set_singleStep(QStyleOptionSlider* theWrappedObject, int  singleStep){ theWrappedObject->singleStep = singleStep; }
int  py_get_singleStep(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->singleStep; }
void py_set_sliderPosition(QStyleOptionSlider* theWrappedObject, int  sliderPosition){ theWrappedObject->sliderPosition = sliderPosition; }
int  py_get_sliderPosition(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->sliderPosition; }
void py_set_sliderValue(QStyleOptionSlider* theWrappedObject, int  sliderValue){ theWrappedObject->sliderValue = sliderValue; }
int  py_get_sliderValue(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->sliderValue; }
void py_set_tickInterval(QStyleOptionSlider* theWrappedObject, int  tickInterval){ theWrappedObject->tickInterval = tickInterval; }
int  py_get_tickInterval(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->tickInterval; }
void py_set_tickPosition(QStyleOptionSlider* theWrappedObject, QSlider::TickPosition  tickPosition){ theWrappedObject->tickPosition = tickPosition; }
QSlider::TickPosition  py_get_tickPosition(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->tickPosition; }
void py_set_upsideDown(QStyleOptionSlider* theWrappedObject, bool  upsideDown){ theWrappedObject->upsideDown = upsideDown; }
bool  py_get_upsideDown(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->upsideDown; }
};





class PythonQtShell_QStyleOptionSpinBox : public QStyleOptionSpinBox
{
public:
    PythonQtShell_QStyleOptionSpinBox():QStyleOptionSpinBox(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other):QStyleOptionSpinBox(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSpinBox(int  version):QStyleOptionSpinBox(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionSpinBox();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionSpinBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSpinBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSpinBox::Version};
public slots:
QStyleOptionSpinBox* new_QStyleOptionSpinBox();
QStyleOptionSpinBox* new_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other);
QStyleOptionSpinBox* new_QStyleOptionSpinBox(int  version);
void delete_QStyleOptionSpinBox(QStyleOptionSpinBox* obj) { delete obj; }
   QStyleOptionSpinBox*  operator_assign(QStyleOptionSpinBox* theWrappedObject, const QStyleOptionSpinBox&  arg__1);
void py_set_buttonSymbols(QStyleOptionSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  buttonSymbols){ theWrappedObject->buttonSymbols = buttonSymbols; }
QAbstractSpinBox::ButtonSymbols  py_get_buttonSymbols(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->buttonSymbols; }
void py_set_frame(QStyleOptionSpinBox* theWrappedObject, bool  frame){ theWrappedObject->frame = frame; }
bool  py_get_frame(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->frame; }
void py_set_stepEnabled(QStyleOptionSpinBox* theWrappedObject, QAbstractSpinBox::StepEnabled  stepEnabled){ theWrappedObject->stepEnabled = stepEnabled; }
QAbstractSpinBox::StepEnabled  py_get_stepEnabled(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->stepEnabled; }
};





class PythonQtShell_QStyleOptionTab : public QStyleOptionTab
{
public:
    PythonQtShell_QStyleOptionTab():QStyleOptionTab(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTab(const QStyleOptionTab&  other):QStyleOptionTab(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTab(int  version):QStyleOptionTab(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTab();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTab : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CornerWidget SelectedPosition StyleOptionType StyleOptionVersion TabFeature TabPosition )
Q_FLAGS(CornerWidgets TabFeatures )
enum CornerWidget{
  NoCornerWidgets = QStyleOptionTab::NoCornerWidgets,   LeftCornerWidget = QStyleOptionTab::LeftCornerWidget,   RightCornerWidget = QStyleOptionTab::RightCornerWidget};
enum SelectedPosition{
  NotAdjacent = QStyleOptionTab::NotAdjacent,   NextIsSelected = QStyleOptionTab::NextIsSelected,   PreviousIsSelected = QStyleOptionTab::PreviousIsSelected};
enum StyleOptionType{
  Type = QStyleOptionTab::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTab::Version};
enum TabFeature{
  None = QStyleOptionTab::None,   HasFrame = QStyleOptionTab::HasFrame};
enum TabPosition{
  Beginning = QStyleOptionTab::Beginning,   Middle = QStyleOptionTab::Middle,   End = QStyleOptionTab::End,   OnlyOneTab = QStyleOptionTab::OnlyOneTab};
Q_DECLARE_FLAGS(CornerWidgets, CornerWidget)
Q_DECLARE_FLAGS(TabFeatures, TabFeature)
public slots:
QStyleOptionTab* new_QStyleOptionTab();
QStyleOptionTab* new_QStyleOptionTab(const QStyleOptionTab&  other);
QStyleOptionTab* new_QStyleOptionTab(int  version);
void delete_QStyleOptionTab(QStyleOptionTab* obj) { delete obj; }
   QStyleOptionTab*  operator_assign(QStyleOptionTab* theWrappedObject, const QStyleOptionTab&  arg__1);
void py_set_cornerWidgets(QStyleOptionTab* theWrappedObject, QStyleOptionTab::CornerWidgets  cornerWidgets){ theWrappedObject->cornerWidgets = cornerWidgets; }
QStyleOptionTab::CornerWidgets  py_get_cornerWidgets(QStyleOptionTab* theWrappedObject){ return theWrappedObject->cornerWidgets; }
void py_set_documentMode(QStyleOptionTab* theWrappedObject, bool  documentMode){ theWrappedObject->documentMode = documentMode; }
bool  py_get_documentMode(QStyleOptionTab* theWrappedObject){ return theWrappedObject->documentMode; }
void py_set_features(QStyleOptionTab* theWrappedObject, QStyleOptionTab::TabFeatures  features){ theWrappedObject->features = features; }
QStyleOptionTab::TabFeatures  py_get_features(QStyleOptionTab* theWrappedObject){ return theWrappedObject->features; }
void py_set_icon(QStyleOptionTab* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionTab* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionTab* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_leftButtonSize(QStyleOptionTab* theWrappedObject, QSize  leftButtonSize){ theWrappedObject->leftButtonSize = leftButtonSize; }
QSize  py_get_leftButtonSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->leftButtonSize; }
void py_set_position(QStyleOptionTab* theWrappedObject, QStyleOptionTab::TabPosition  position){ theWrappedObject->position = position; }
QStyleOptionTab::TabPosition  py_get_position(QStyleOptionTab* theWrappedObject){ return theWrappedObject->position; }
void py_set_rightButtonSize(QStyleOptionTab* theWrappedObject, QSize  rightButtonSize){ theWrappedObject->rightButtonSize = rightButtonSize; }
QSize  py_get_rightButtonSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->rightButtonSize; }
void py_set_row(QStyleOptionTab* theWrappedObject, int  row){ theWrappedObject->row = row; }
int  py_get_row(QStyleOptionTab* theWrappedObject){ return theWrappedObject->row; }
void py_set_selectedPosition(QStyleOptionTab* theWrappedObject, QStyleOptionTab::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionTab::SelectedPosition  py_get_selectedPosition(QStyleOptionTab* theWrappedObject){ return theWrappedObject->selectedPosition; }
void py_set_shape(QStyleOptionTab* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTab* theWrappedObject){ return theWrappedObject->shape; }
void py_set_tabIndex(QStyleOptionTab* theWrappedObject, int  tabIndex){ theWrappedObject->tabIndex = tabIndex; }
int  py_get_tabIndex(QStyleOptionTab* theWrappedObject){ return theWrappedObject->tabIndex; }
void py_set_text(QStyleOptionTab* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionTab* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionTabBarBase : public QStyleOptionTabBarBase
{
public:
    PythonQtShell_QStyleOptionTabBarBase():QStyleOptionTabBarBase(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other):QStyleOptionTabBarBase(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTabBarBase(int  version):QStyleOptionTabBarBase(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTabBarBase();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTabBarBase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionTabBarBase::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTabBarBase::Version};
public slots:
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase();
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other);
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase(int  version);
void delete_QStyleOptionTabBarBase(QStyleOptionTabBarBase* obj) { delete obj; }
   QStyleOptionTabBarBase*  operator_assign(QStyleOptionTabBarBase* theWrappedObject, const QStyleOptionTabBarBase&  arg__1);
void py_set_documentMode(QStyleOptionTabBarBase* theWrappedObject, bool  documentMode){ theWrappedObject->documentMode = documentMode; }
bool  py_get_documentMode(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->documentMode; }
void py_set_selectedTabRect(QStyleOptionTabBarBase* theWrappedObject, QRect  selectedTabRect){ theWrappedObject->selectedTabRect = selectedTabRect; }
QRect  py_get_selectedTabRect(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->selectedTabRect; }
void py_set_shape(QStyleOptionTabBarBase* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->shape; }
void py_set_tabBarRect(QStyleOptionTabBarBase* theWrappedObject, QRect  tabBarRect){ theWrappedObject->tabBarRect = tabBarRect; }
QRect  py_get_tabBarRect(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->tabBarRect; }
};





class PythonQtShell_QStyleOptionTabWidgetFrame : public QStyleOptionTabWidgetFrame
{
public:
    PythonQtShell_QStyleOptionTabWidgetFrame():QStyleOptionTabWidgetFrame(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other):QStyleOptionTabWidgetFrame(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTabWidgetFrame(int  version):QStyleOptionTabWidgetFrame(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTabWidgetFrame();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTabWidgetFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionTabWidgetFrame::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTabWidgetFrame::Version};
public slots:
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame();
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other);
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame(int  version);
void delete_QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame* obj) { delete obj; }
   QStyleOptionTabWidgetFrame*  operator_assign(QStyleOptionTabWidgetFrame* theWrappedObject, const QStyleOptionTabWidgetFrame&  arg__1);
void py_set_leftCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  leftCornerWidgetSize){ theWrappedObject->leftCornerWidgetSize = leftCornerWidgetSize; }
QSize  py_get_leftCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->leftCornerWidgetSize; }
void py_set_lineWidth(QStyleOptionTabWidgetFrame* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionTabWidgetFrame* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_rightCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  rightCornerWidgetSize){ theWrappedObject->rightCornerWidgetSize = rightCornerWidgetSize; }
QSize  py_get_rightCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->rightCornerWidgetSize; }
void py_set_selectedTabRect(QStyleOptionTabWidgetFrame* theWrappedObject, QRect  selectedTabRect){ theWrappedObject->selectedTabRect = selectedTabRect; }
QRect  py_get_selectedTabRect(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->selectedTabRect; }
void py_set_shape(QStyleOptionTabWidgetFrame* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->shape; }
void py_set_tabBarRect(QStyleOptionTabWidgetFrame* theWrappedObject, QRect  tabBarRect){ theWrappedObject->tabBarRect = tabBarRect; }
QRect  py_get_tabBarRect(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->tabBarRect; }
void py_set_tabBarSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  tabBarSize){ theWrappedObject->tabBarSize = tabBarSize; }
QSize  py_get_tabBarSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->tabBarSize; }
};





class PythonQtShell_QStyleOptionTitleBar : public QStyleOptionTitleBar
{
public:
    PythonQtShell_QStyleOptionTitleBar():QStyleOptionTitleBar(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other):QStyleOptionTitleBar(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTitleBar(int  version):QStyleOptionTitleBar(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTitleBar();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTitleBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionTitleBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTitleBar::Version};
public slots:
QStyleOptionTitleBar* new_QStyleOptionTitleBar();
QStyleOptionTitleBar* new_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other);
QStyleOptionTitleBar* new_QStyleOptionTitleBar(int  version);
void delete_QStyleOptionTitleBar(QStyleOptionTitleBar* obj) { delete obj; }
   QStyleOptionTitleBar*  operator_assign(QStyleOptionTitleBar* theWrappedObject, const QStyleOptionTitleBar&  arg__1);
void py_set_icon(QStyleOptionTitleBar* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->icon; }
void py_set_text(QStyleOptionTitleBar* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->text; }
void py_set_titleBarFlags(QStyleOptionTitleBar* theWrappedObject, Qt::WindowFlags  titleBarFlags){ theWrappedObject->titleBarFlags = titleBarFlags; }
Qt::WindowFlags  py_get_titleBarFlags(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->titleBarFlags; }
void py_set_titleBarState(QStyleOptionTitleBar* theWrappedObject, int  titleBarState){ theWrappedObject->titleBarState = titleBarState; }
int  py_get_titleBarState(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->titleBarState; }
};





class PythonQtShell_QStyleOptionToolBar : public QStyleOptionToolBar
{
public:
    PythonQtShell_QStyleOptionToolBar():QStyleOptionToolBar(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolBar(const QStyleOptionToolBar&  other):QStyleOptionToolBar(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolBar(int  version):QStyleOptionToolBar(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionToolBar();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionToolBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion ToolBarFeature ToolBarPosition )
Q_FLAGS(ToolBarFeatures )
enum StyleOptionType{
  Type = QStyleOptionToolBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionToolBar::Version};
enum ToolBarFeature{
  None = QStyleOptionToolBar::None,   Movable = QStyleOptionToolBar::Movable};
enum ToolBarPosition{
  Beginning = QStyleOptionToolBar::Beginning,   Middle = QStyleOptionToolBar::Middle,   End = QStyleOptionToolBar::End,   OnlyOne = QStyleOptionToolBar::OnlyOne};
Q_DECLARE_FLAGS(ToolBarFeatures, ToolBarFeature)
public slots:
QStyleOptionToolBar* new_QStyleOptionToolBar();
QStyleOptionToolBar* new_QStyleOptionToolBar(const QStyleOptionToolBar&  other);
QStyleOptionToolBar* new_QStyleOptionToolBar(int  version);
void delete_QStyleOptionToolBar(QStyleOptionToolBar* obj) { delete obj; }
   QStyleOptionToolBar*  operator_assign(QStyleOptionToolBar* theWrappedObject, const QStyleOptionToolBar&  arg__1);
void py_set_features(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarFeatures  features){ theWrappedObject->features = features; }
QStyleOptionToolBar::ToolBarFeatures  py_get_features(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->features; }
void py_set_lineWidth(QStyleOptionToolBar* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionToolBar* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_positionOfLine(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarPosition  positionOfLine){ theWrappedObject->positionOfLine = positionOfLine; }
QStyleOptionToolBar::ToolBarPosition  py_get_positionOfLine(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->positionOfLine; }
void py_set_positionWithinLine(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarPosition  positionWithinLine){ theWrappedObject->positionWithinLine = positionWithinLine; }
QStyleOptionToolBar::ToolBarPosition  py_get_positionWithinLine(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->positionWithinLine; }
void py_set_toolBarArea(QStyleOptionToolBar* theWrappedObject, Qt::ToolBarArea  toolBarArea){ theWrappedObject->toolBarArea = toolBarArea; }
Qt::ToolBarArea  py_get_toolBarArea(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->toolBarArea; }
};





class PythonQtShell_QStyleOptionToolBox : public QStyleOptionToolBox
{
public:
    PythonQtShell_QStyleOptionToolBox():QStyleOptionToolBox(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolBox(const QStyleOptionToolBox&  other):QStyleOptionToolBox(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolBox(int  version):QStyleOptionToolBox(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionToolBox();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionToolBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectedPosition StyleOptionType StyleOptionVersion TabPosition )
enum SelectedPosition{
  NotAdjacent = QStyleOptionToolBox::NotAdjacent,   NextIsSelected = QStyleOptionToolBox::NextIsSelected,   PreviousIsSelected = QStyleOptionToolBox::PreviousIsSelected};
enum StyleOptionType{
  Type = QStyleOptionToolBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionToolBox::Version};
enum TabPosition{
  Beginning = QStyleOptionToolBox::Beginning,   Middle = QStyleOptionToolBox::Middle,   End = QStyleOptionToolBox::End,   OnlyOneTab = QStyleOptionToolBox::OnlyOneTab};
public slots:
QStyleOptionToolBox* new_QStyleOptionToolBox();
QStyleOptionToolBox* new_QStyleOptionToolBox(const QStyleOptionToolBox&  other);
QStyleOptionToolBox* new_QStyleOptionToolBox(int  version);
void delete_QStyleOptionToolBox(QStyleOptionToolBox* obj) { delete obj; }
   QStyleOptionToolBox*  operator_assign(QStyleOptionToolBox* theWrappedObject, const QStyleOptionToolBox&  arg__1);
void py_set_icon(QStyleOptionToolBox* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->icon; }
void py_set_position(QStyleOptionToolBox* theWrappedObject, QStyleOptionToolBox::TabPosition  position){ theWrappedObject->position = position; }
QStyleOptionToolBox::TabPosition  py_get_position(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->position; }
void py_set_selectedPosition(QStyleOptionToolBox* theWrappedObject, QStyleOptionToolBox::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionToolBox::SelectedPosition  py_get_selectedPosition(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->selectedPosition; }
void py_set_text(QStyleOptionToolBox* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionToolButton : public QStyleOptionToolButton
{
public:
    PythonQtShell_QStyleOptionToolButton():QStyleOptionToolButton(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolButton(const QStyleOptionToolButton&  other):QStyleOptionToolButton(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolButton(int  version):QStyleOptionToolButton(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionToolButton();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionToolButton : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion ToolButtonFeature )
Q_FLAGS(ToolButtonFeatures )
enum StyleOptionType{
  Type = QStyleOptionToolButton::Type};
enum StyleOptionVersion{
  Version = QStyleOptionToolButton::Version};
enum ToolButtonFeature{
  None = QStyleOptionToolButton::None,   Arrow = QStyleOptionToolButton::Arrow,   Menu = QStyleOptionToolButton::Menu,   MenuButtonPopup = QStyleOptionToolButton::MenuButtonPopup,   PopupDelay = QStyleOptionToolButton::PopupDelay,   HasMenu = QStyleOptionToolButton::HasMenu};
Q_DECLARE_FLAGS(ToolButtonFeatures, ToolButtonFeature)
public slots:
QStyleOptionToolButton* new_QStyleOptionToolButton();
QStyleOptionToolButton* new_QStyleOptionToolButton(const QStyleOptionToolButton&  other);
QStyleOptionToolButton* new_QStyleOptionToolButton(int  version);
void delete_QStyleOptionToolButton(QStyleOptionToolButton* obj) { delete obj; }
   QStyleOptionToolButton*  operator_assign(QStyleOptionToolButton* theWrappedObject, const QStyleOptionToolButton&  arg__1);
void py_set_arrowType(QStyleOptionToolButton* theWrappedObject, Qt::ArrowType  arrowType){ theWrappedObject->arrowType = arrowType; }
Qt::ArrowType  py_get_arrowType(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->arrowType; }
void py_set_features(QStyleOptionToolButton* theWrappedObject, QStyleOptionToolButton::ToolButtonFeatures  features){ theWrappedObject->features = features; }
QStyleOptionToolButton::ToolButtonFeatures  py_get_features(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->features; }
void py_set_font(QStyleOptionToolButton* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->font; }
void py_set_icon(QStyleOptionToolButton* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionToolButton* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_pos(QStyleOptionToolButton* theWrappedObject, QPoint  pos){ theWrappedObject->pos = pos; }
QPoint  py_get_pos(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->pos; }
void py_set_text(QStyleOptionToolButton* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->text; }
void py_set_toolButtonStyle(QStyleOptionToolButton* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle){ theWrappedObject->toolButtonStyle = toolButtonStyle; }
Qt::ToolButtonStyle  py_get_toolButtonStyle(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->toolButtonStyle; }
};





class PythonQtShell_QStyleOptionViewItem : public QStyleOptionViewItem
{
public:
    PythonQtShell_QStyleOptionViewItem():QStyleOptionViewItem(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionViewItem(const QStyleOptionViewItem&  other):QStyleOptionViewItem(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionViewItem(int  version):QStyleOptionViewItem(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionViewItem();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionViewItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Position StyleOptionType StyleOptionVersion ViewItemFeature ViewItemPosition )
Q_FLAGS(ViewItemFeatures )
enum Position{
  Left = QStyleOptionViewItem::Left,   Right = QStyleOptionViewItem::Right,   Top = QStyleOptionViewItem::Top,   Bottom = QStyleOptionViewItem::Bottom};
enum StyleOptionType{
  Type = QStyleOptionViewItem::Type};
enum StyleOptionVersion{
  Version = QStyleOptionViewItem::Version};
enum ViewItemFeature{
  None = QStyleOptionViewItem::None,   WrapText = QStyleOptionViewItem::WrapText,   Alternate = QStyleOptionViewItem::Alternate,   HasCheckIndicator = QStyleOptionViewItem::HasCheckIndicator,   HasDisplay = QStyleOptionViewItem::HasDisplay,   HasDecoration = QStyleOptionViewItem::HasDecoration};
enum ViewItemPosition{
  Invalid = QStyleOptionViewItem::Invalid,   Beginning = QStyleOptionViewItem::Beginning,   Middle = QStyleOptionViewItem::Middle,   End = QStyleOptionViewItem::End,   OnlyOne = QStyleOptionViewItem::OnlyOne};
Q_DECLARE_FLAGS(ViewItemFeatures, ViewItemFeature)
public slots:
QStyleOptionViewItem* new_QStyleOptionViewItem();
QStyleOptionViewItem* new_QStyleOptionViewItem(const QStyleOptionViewItem&  other);
QStyleOptionViewItem* new_QStyleOptionViewItem(int  version);
void delete_QStyleOptionViewItem(QStyleOptionViewItem* obj) { delete obj; }
   QStyleOptionViewItem*  operator_assign(QStyleOptionViewItem* theWrappedObject, const QStyleOptionViewItem&  arg__1);
void py_set_backgroundBrush(QStyleOptionViewItem* theWrappedObject, QBrush  backgroundBrush){ theWrappedObject->backgroundBrush = backgroundBrush; }
QBrush  py_get_backgroundBrush(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->backgroundBrush; }
void py_set_checkState(QStyleOptionViewItem* theWrappedObject, Qt::CheckState  checkState){ theWrappedObject->checkState = checkState; }
Qt::CheckState  py_get_checkState(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->checkState; }
void py_set_decorationAlignment(QStyleOptionViewItem* theWrappedObject, Qt::Alignment  decorationAlignment){ theWrappedObject->decorationAlignment = decorationAlignment; }
Qt::Alignment  py_get_decorationAlignment(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationAlignment; }
void py_set_decorationPosition(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::Position  decorationPosition){ theWrappedObject->decorationPosition = decorationPosition; }
QStyleOptionViewItem::Position  py_get_decorationPosition(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationPosition; }
void py_set_decorationSize(QStyleOptionViewItem* theWrappedObject, QSize  decorationSize){ theWrappedObject->decorationSize = decorationSize; }
QSize  py_get_decorationSize(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationSize; }
void py_set_displayAlignment(QStyleOptionViewItem* theWrappedObject, Qt::Alignment  displayAlignment){ theWrappedObject->displayAlignment = displayAlignment; }
Qt::Alignment  py_get_displayAlignment(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->displayAlignment; }
void py_set_features(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::ViewItemFeatures  features){ theWrappedObject->features = features; }
QStyleOptionViewItem::ViewItemFeatures  py_get_features(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->features; }
void py_set_font(QStyleOptionViewItem* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->font; }
void py_set_icon(QStyleOptionViewItem* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->icon; }
void py_set_index(QStyleOptionViewItem* theWrappedObject, QModelIndex  index){ theWrappedObject->index = index; }
QModelIndex  py_get_index(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->index; }
void py_set_locale(QStyleOptionViewItem* theWrappedObject, QLocale  locale){ theWrappedObject->locale = locale; }
QLocale  py_get_locale(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->locale; }
void py_set_showDecorationSelected(QStyleOptionViewItem* theWrappedObject, bool  showDecorationSelected){ theWrappedObject->showDecorationSelected = showDecorationSelected; }
bool  py_get_showDecorationSelected(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->showDecorationSelected; }
void py_set_text(QStyleOptionViewItem* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->text; }
void py_set_textElideMode(QStyleOptionViewItem* theWrappedObject, Qt::TextElideMode  textElideMode){ theWrappedObject->textElideMode = textElideMode; }
Qt::TextElideMode  py_get_textElideMode(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->textElideMode; }
void py_set_viewItemPosition(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::ViewItemPosition  viewItemPosition){ theWrappedObject->viewItemPosition = viewItemPosition; }
QStyleOptionViewItem::ViewItemPosition  py_get_viewItemPosition(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->viewItemPosition; }
const QWidget*  py_get_widget(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->widget; }
};





class PythonQtWrapper_QStylePainter : public QObject
{ Q_OBJECT
public:
public slots:
QStylePainter* new_QStylePainter();
QStylePainter* new_QStylePainter(QPaintDevice*  pd, QWidget*  w);
QStylePainter* new_QStylePainter(QWidget*  w);
void delete_QStylePainter(QStylePainter* obj) { delete obj; }
   bool  begin(QStylePainter* theWrappedObject, QPaintDevice*  pd, QWidget*  w);
   bool  begin(QStylePainter* theWrappedObject, QWidget*  w);
   void drawComplexControl(QStylePainter* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex&  opt);
   void drawControl(QStylePainter* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption&  opt);
   void drawItemPixmap(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap);
   void drawItemText(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole);
   void drawPrimitive(QStylePainter* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption&  opt);
   QStyle*  style(QStylePainter* theWrappedObject) const;
};





class PythonQtShell_QStylePlugin : public QStylePlugin
{
public:
    PythonQtShell_QStylePlugin(QObject*  parent = nullptr):QStylePlugin(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStylePlugin() override;

void childEvent(QChildEvent*  event) override;
QStyle*  create(const QString&  key) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStylePlugin : public QStylePlugin
{ public:
inline QStyle*  py_q_create(const QString&  key) { return this->create(key); }
};

class PythonQtWrapper_QStylePlugin : public QObject
{ Q_OBJECT
public:
public slots:
QStylePlugin* new_QStylePlugin(QObject*  parent = nullptr);
void delete_QStylePlugin(QStylePlugin* obj) { delete obj; }
   QStyle*  create(QStylePlugin* theWrappedObject, const QString&  key);
   QStyle*  py_q_create(QStylePlugin* theWrappedObject, const QString&  key){  return (((PythonQtPublicPromoter_QStylePlugin*)theWrappedObject)->py_q_create(key));}
};





class PythonQtShell_QStyledItemDelegate : public QStyledItemDelegate
{
public:
    PythonQtShell_QStyledItemDelegate(QObject*  parent = nullptr):QStyledItemDelegate(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStyledItemDelegate() override;

void childEvent(QChildEvent*  event) override;
QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void customEvent(QEvent*  event) override;
void destroyEditor(QWidget*  editor, const QModelIndex&  index) const override;
QString  displayText(const QVariant&  value, const QLocale&  locale) const override;
bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
bool  helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
void initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const override;
void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
QList<int >  paintingRoles() const override;
void setEditorData(QWidget*  editor, const QModelIndex&  index) const override;
void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const override;
QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStyledItemDelegate : public QStyledItemDelegate
{ public:
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return this->editorEvent(event, model, option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const { this->initStyleOption(option, index); }
inline QWidget*  py_q_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::createEditor(parent, option, index); }
inline QString  py_q_displayText(const QVariant&  value, const QLocale&  locale) const { return QStyledItemDelegate::displayText(value, locale); }
inline bool  py_q_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QStyledItemDelegate::editorEvent(event, model, option, index); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QStyledItemDelegate::eventFilter(object, event); }
inline void py_q_initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const { QStyledItemDelegate::initStyleOption(option, index); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::paint(painter, option, index); }
inline void py_q_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QStyledItemDelegate::setEditorData(editor, index); }
inline void py_q_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QStyledItemDelegate::setModelData(editor, model, index); }
inline QSize  py_q_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::sizeHint(option, index); }
inline void py_q_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QStyledItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QStyledItemDelegate* new_QStyledItemDelegate(QObject*  parent = nullptr);
void delete_QStyledItemDelegate(QStyledItemDelegate* obj) { delete obj; }
   QWidget*  py_q_createEditor(QStyledItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_createEditor(parent, option, index));}
   QString  displayText(QStyledItemDelegate* theWrappedObject, const QVariant&  value, const QLocale&  locale) const;
   QString  py_q_displayText(QStyledItemDelegate* theWrappedObject, const QVariant&  value, const QLocale&  locale) const{  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_displayText(value, locale));}
   bool  py_q_editorEvent(QStyledItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_editorEvent(event, model, option, index));}
   bool  py_q_eventFilter(QStyledItemDelegate* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_eventFilter(object, event));}
   void initStyleOption(QStyledItemDelegate* theWrappedObject, QStyleOptionViewItem*  option, const QModelIndex&  index) const;
   void py_q_initStyleOption(QStyledItemDelegate* theWrappedObject, QStyleOptionViewItem*  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_initStyleOption(option, index));}
   QItemEditorFactory*  itemEditorFactory(QStyledItemDelegate* theWrappedObject) const;
   void py_q_paint(QStyledItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_paint(painter, option, index));}
   void py_q_setEditorData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_setEditorData(editor, index));}
   void setItemEditorFactory(QStyledItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   void py_q_setModelData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_setModelData(editor, model, index));}
   QSize  py_q_sizeHint(QStyledItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_sizeHint(option, index));}
   void py_q_updateEditorGeometry(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_updateEditorGeometry(editor, option, index));}
};





class PythonQtShell_QSurface : public QSurface
{
public:
    PythonQtShell_QSurface(QSurface::SurfaceClass  type):QSurface(type),_wrapper(nullptr) {};

   ~PythonQtShell_QSurface() override;

QSurfaceFormat  format() const override;
QSize  size() const override;
QPlatformSurface*  surfaceHandle() const override;
QSurface::SurfaceType  surfaceType() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSurface : public QSurface
{ public:
inline QSurfaceFormat  py_q_format() const { return this->format(); }
inline QSize  py_q_size() const { return this->size(); }
inline QPlatformSurface*  py_q_surfaceHandle() const { return this->surfaceHandle(); }
inline QSurface::SurfaceType  py_q_surfaceType() const { return this->surfaceType(); }
};

class PythonQtWrapper_QSurface : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SurfaceClass SurfaceType )
enum SurfaceClass{
  Window = QSurface::Window,   Offscreen = QSurface::Offscreen};
enum SurfaceType{
  RasterSurface = QSurface::RasterSurface,   OpenGLSurface = QSurface::OpenGLSurface,   RasterGLSurface = QSurface::RasterGLSurface,   OpenVGSurface = QSurface::OpenVGSurface,   VulkanSurface = QSurface::VulkanSurface,   MetalSurface = QSurface::MetalSurface,   Direct3DSurface = QSurface::Direct3DSurface};
public slots:
QSurface* new_QSurface(QSurface::SurfaceClass  type);
void delete_QSurface(QSurface* obj) { delete obj; }
   QSurfaceFormat  format(QSurface* theWrappedObject) const;
   QSurfaceFormat  py_q_format(QSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSurface*)theWrappedObject)->py_q_format());}
   QSize  size(QSurface* theWrappedObject) const;
   QSize  py_q_size(QSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSurface*)theWrappedObject)->py_q_size());}
   bool  supportsOpenGL(QSurface* theWrappedObject) const;
   QSurface::SurfaceClass  surfaceClass(QSurface* theWrappedObject) const;
   QPlatformSurface*  surfaceHandle(QSurface* theWrappedObject) const;
   QPlatformSurface*  py_q_surfaceHandle(QSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSurface*)theWrappedObject)->py_q_surfaceHandle());}
   QSurface::SurfaceType  surfaceType(QSurface* theWrappedObject) const;
   QSurface::SurfaceType  py_q_surfaceType(QSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSurface*)theWrappedObject)->py_q_surfaceType());}
};





class PythonQtWrapper_QSurfaceFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorSpace FormatOption OpenGLContextProfile RenderableType SwapBehavior )
Q_FLAGS(FormatOptions )
enum ColorSpace{
  DefaultColorSpace = QSurfaceFormat::DefaultColorSpace,   sRGBColorSpace = QSurfaceFormat::sRGBColorSpace};
enum FormatOption{
  StereoBuffers = QSurfaceFormat::StereoBuffers,   DebugContext = QSurfaceFormat::DebugContext,   DeprecatedFunctions = QSurfaceFormat::DeprecatedFunctions,   ResetNotification = QSurfaceFormat::ResetNotification,   ProtectedContent = QSurfaceFormat::ProtectedContent};
enum OpenGLContextProfile{
  NoProfile = QSurfaceFormat::NoProfile,   CoreProfile = QSurfaceFormat::CoreProfile,   CompatibilityProfile = QSurfaceFormat::CompatibilityProfile};
enum RenderableType{
  DefaultRenderableType = QSurfaceFormat::DefaultRenderableType,   OpenGL = QSurfaceFormat::OpenGL,   OpenGLES = QSurfaceFormat::OpenGLES,   OpenVG = QSurfaceFormat::OpenVG};
enum SwapBehavior{
  DefaultSwapBehavior = QSurfaceFormat::DefaultSwapBehavior,   SingleBuffer = QSurfaceFormat::SingleBuffer,   DoubleBuffer = QSurfaceFormat::DoubleBuffer,   TripleBuffer = QSurfaceFormat::TripleBuffer};
Q_DECLARE_FLAGS(FormatOptions, FormatOption)
public slots:
QSurfaceFormat* new_QSurfaceFormat();
QSurfaceFormat* new_QSurfaceFormat(QSurfaceFormat::FormatOptions  options);
QSurfaceFormat* new_QSurfaceFormat(const QSurfaceFormat&  other);
void delete_QSurfaceFormat(QSurfaceFormat* obj) { delete obj; }
   int  alphaBufferSize(QSurfaceFormat* theWrappedObject) const;
   int  blueBufferSize(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat  static_QSurfaceFormat_defaultFormat();
   int  depthBufferSize(QSurfaceFormat* theWrappedObject) const;
   int  greenBufferSize(QSurfaceFormat* theWrappedObject) const;
   bool  hasAlpha(QSurfaceFormat* theWrappedObject) const;
   int  majorVersion(QSurfaceFormat* theWrappedObject) const;
   int  minorVersion(QSurfaceFormat* theWrappedObject) const;
   bool  __ne__(QSurfaceFormat* theWrappedObject, const QSurfaceFormat&  rhs);
   QSurfaceFormat*  operator_assign(QSurfaceFormat* theWrappedObject, const QSurfaceFormat&  other);
   bool  __eq__(QSurfaceFormat* theWrappedObject, const QSurfaceFormat&  rhs);
   QSurfaceFormat::FormatOptions  options(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::OpenGLContextProfile  profile(QSurfaceFormat* theWrappedObject) const;
   int  redBufferSize(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::RenderableType  renderableType(QSurfaceFormat* theWrappedObject) const;
   int  samples(QSurfaceFormat* theWrappedObject) const;
   void setAlphaBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setBlueBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setColorSpace(QSurfaceFormat* theWrappedObject, QSurfaceFormat::ColorSpace  colorSpace);
   void static_QSurfaceFormat_setDefaultFormat(const QSurfaceFormat&  format);
   void setDepthBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setGreenBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setMajorVersion(QSurfaceFormat* theWrappedObject, int  majorVersion);
   void setMinorVersion(QSurfaceFormat* theWrappedObject, int  minorVersion);
   void setOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOption  option, bool  on = true);
   void setOptions(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOptions  options);
   void setProfile(QSurfaceFormat* theWrappedObject, QSurfaceFormat::OpenGLContextProfile  profile);
   void setRedBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setRenderableType(QSurfaceFormat* theWrappedObject, QSurfaceFormat::RenderableType  type);
   void setSamples(QSurfaceFormat* theWrappedObject, int  numSamples);
   void setStencilBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setStereo(QSurfaceFormat* theWrappedObject, bool  enable);
   void setSwapBehavior(QSurfaceFormat* theWrappedObject, QSurfaceFormat::SwapBehavior  behavior);
   void setSwapInterval(QSurfaceFormat* theWrappedObject, int  interval);
   void setVersion(QSurfaceFormat* theWrappedObject, int  major, int  minor);
   int  stencilBufferSize(QSurfaceFormat* theWrappedObject) const;
   bool  stereo(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::SwapBehavior  swapBehavior(QSurfaceFormat* theWrappedObject) const;
   int  swapInterval(QSurfaceFormat* theWrappedObject) const;
   bool  testOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOption  option) const;
   QPair<int , int >  version(QSurfaceFormat* theWrappedObject) const;
    QString py_toString(QSurfaceFormat*);
};





class PythonQtShell_QSwipeGesture : public QSwipeGesture
{
public:
    PythonQtShell_QSwipeGesture(QObject*  parent = nullptr):QSwipeGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSwipeGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSwipeGesture : public QObject
{ Q_OBJECT
public:
public slots:
QSwipeGesture* new_QSwipeGesture(QObject*  parent = nullptr);
void delete_QSwipeGesture(QSwipeGesture* obj) { delete obj; }
   QSwipeGesture::SwipeDirection  horizontalDirection(QSwipeGesture* theWrappedObject) const;
   void setSwipeAngle(QSwipeGesture* theWrappedObject, qreal  value);
   qreal  swipeAngle(QSwipeGesture* theWrappedObject) const;
   QSwipeGesture::SwipeDirection  verticalDirection(QSwipeGesture* theWrappedObject) const;
};





class PythonQtShell_QSyntaxHighlighter : public QSyntaxHighlighter
{
public:
    PythonQtShell_QSyntaxHighlighter(QObject*  parent):QSyntaxHighlighter(parent),_wrapper(nullptr) {};
    PythonQtShell_QSyntaxHighlighter(QTextDocument*  parent):QSyntaxHighlighter(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSyntaxHighlighter() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void highlightBlock(const QString&  text) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSyntaxHighlighter : public QSyntaxHighlighter
{ public:
inline QTextBlock  promoted_currentBlock() const { return this->currentBlock(); }
inline int  promoted_currentBlockState() const { return this->currentBlockState(); }
inline QTextBlockUserData*  promoted_currentBlockUserData() const { return this->currentBlockUserData(); }
inline QTextCharFormat  promoted_format(int  pos) const { return this->format(pos); }
inline void promoted_highlightBlock(const QString&  text) { this->highlightBlock(text); }
inline int  promoted_previousBlockState() const { return this->previousBlockState(); }
inline void promoted_setCurrentBlockState(int  newState) { this->setCurrentBlockState(newState); }
inline void promoted_setCurrentBlockUserData(QTextBlockUserData*  data) { this->setCurrentBlockUserData(data); }
inline void promoted_setFormat(int  start, int  count, const QColor&  color) { this->setFormat(start, count, color); }
inline void promoted_setFormat(int  start, int  count, const QFont&  font) { this->setFormat(start, count, font); }
inline void promoted_setFormat(int  start, int  count, const QTextCharFormat&  format) { this->setFormat(start, count, format); }
inline void py_q_highlightBlock(const QString&  text) { this->highlightBlock(text); }
};

class PythonQtWrapper_QSyntaxHighlighter : public QObject
{ Q_OBJECT
public:
public slots:
QSyntaxHighlighter* new_QSyntaxHighlighter(QObject*  parent);
QSyntaxHighlighter* new_QSyntaxHighlighter(QTextDocument*  parent);
void delete_QSyntaxHighlighter(QSyntaxHighlighter* obj) { delete obj; }
   QTextBlock  currentBlock(QSyntaxHighlighter* theWrappedObject) const;
   int  currentBlockState(QSyntaxHighlighter* theWrappedObject) const;
   QTextBlockUserData*  currentBlockUserData(QSyntaxHighlighter* theWrappedObject) const;
   QTextDocument*  document(QSyntaxHighlighter* theWrappedObject) const;
   QTextCharFormat  format(QSyntaxHighlighter* theWrappedObject, int  pos) const;
   void highlightBlock(QSyntaxHighlighter* theWrappedObject, const QString&  text);
   void py_q_highlightBlock(QSyntaxHighlighter* theWrappedObject, const QString&  text){  (((PythonQtPublicPromoter_QSyntaxHighlighter*)theWrappedObject)->py_q_highlightBlock(text));}
   int  previousBlockState(QSyntaxHighlighter* theWrappedObject) const;
   void setCurrentBlockState(QSyntaxHighlighter* theWrappedObject, int  newState);
   void setCurrentBlockUserData(QSyntaxHighlighter* theWrappedObject, QTextBlockUserData*  data);
   void setDocument(QSyntaxHighlighter* theWrappedObject, QTextDocument*  doc);
   void setFormat(QSyntaxHighlighter* theWrappedObject, int  start, int  count, const QColor&  color);
   void setFormat(QSyntaxHighlighter* theWrappedObject, int  start, int  count, const QFont&  font);
   void setFormat(QSyntaxHighlighter* theWrappedObject, int  start, int  count, const QTextCharFormat&  format);
};





class PythonQtShell_QSystemTrayIcon : public QSystemTrayIcon
{
public:
    PythonQtShell_QSystemTrayIcon(QObject*  parent = nullptr):QSystemTrayIcon(parent),_wrapper(nullptr) {};
    PythonQtShell_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = nullptr):QSystemTrayIcon(icon, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSystemTrayIcon() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSystemTrayIcon : public QSystemTrayIcon
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  py_q_event(QEvent*  event) { return QSystemTrayIcon::event(event); }
};

class PythonQtWrapper_QSystemTrayIcon : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ActivationReason MessageIcon )
enum ActivationReason{
  Unknown = QSystemTrayIcon::Unknown,   Context = QSystemTrayIcon::Context,   DoubleClick = QSystemTrayIcon::DoubleClick,   Trigger = QSystemTrayIcon::Trigger,   MiddleClick = QSystemTrayIcon::MiddleClick};
enum MessageIcon{
  NoIcon = QSystemTrayIcon::NoIcon,   Information = QSystemTrayIcon::Information,   Warning = QSystemTrayIcon::Warning,   Critical = QSystemTrayIcon::Critical};
public slots:
QSystemTrayIcon* new_QSystemTrayIcon(QObject*  parent = nullptr);
QSystemTrayIcon* new_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = nullptr);
void delete_QSystemTrayIcon(QSystemTrayIcon* obj) { delete obj; }
   QMenu*  contextMenu(QSystemTrayIcon* theWrappedObject) const;
   bool  py_q_event(QSystemTrayIcon* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSystemTrayIcon*)theWrappedObject)->py_q_event(event));}
   QRect  geometry(QSystemTrayIcon* theWrappedObject) const;
   QIcon  icon(QSystemTrayIcon* theWrappedObject) const;
   bool  static_QSystemTrayIcon_isSystemTrayAvailable();
   bool  isVisible(QSystemTrayIcon* theWrappedObject) const;
   void setContextMenu(QSystemTrayIcon* theWrappedObject, QMenu*  menu);
   void setIcon(QSystemTrayIcon* theWrappedObject, const QIcon&  icon);
   void setToolTip(QSystemTrayIcon* theWrappedObject, const QString&  tip);
   bool  static_QSystemTrayIcon_supportsMessages();
   QString  toolTip(QSystemTrayIcon* theWrappedObject) const;
};





class PythonQtShell_QTabBar : public QTabBar
{
public:
    PythonQtShell_QTabBar(QWidget*  parent = nullptr):QTabBar(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTabBar() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  Event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  arg__1) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionTab*  option, int  tabIndex) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
QSize  minimumTabSizeHint(int  index) const override;
void mouseDoubleClickEvent(QMouseEvent*  arg__1) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabInserted(int  index) override;
void tabLayoutChange() override;
void tabRemoved(int  index) override;
QSize  tabSizeHint(int  index) const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTabBar : public QTabBar
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionTab*  option, int  tabIndex) const { this->initStyleOption(option, tabIndex); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline QSize  promoted_minimumTabSizeHint(int  index) const { return this->minimumTabSizeHint(index); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { this->mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_tabInserted(int  index) { this->tabInserted(index); }
inline void promoted_tabLayoutChange() { this->tabLayoutChange(); }
inline void promoted_tabRemoved(int  index) { this->tabRemoved(index); }
inline QSize  promoted_tabSizeHint(int  index) const { return this->tabSizeHint(index); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_changeEvent(QEvent*  arg__1) { QTabBar::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QTabBar::event(arg__1); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QTabBar::hideEvent(arg__1); }
inline void py_q_initStyleOption(QStyleOptionTab*  option, int  tabIndex) const { QTabBar::initStyleOption(option, tabIndex); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QTabBar::keyPressEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QTabBar::minimumSizeHint(); }
inline QSize  py_q_minimumTabSizeHint(int  index) const { return QTabBar::minimumTabSizeHint(index); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QTabBar::mouseDoubleClickEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QTabBar::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QTabBar::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QTabBar::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QTabBar::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QTabBar::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QTabBar::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QTabBar::sizeHint(); }
inline void py_q_tabInserted(int  index) { QTabBar::tabInserted(index); }
inline void py_q_tabLayoutChange() { QTabBar::tabLayoutChange(); }
inline void py_q_tabRemoved(int  index) { QTabBar::tabRemoved(index); }
inline QSize  py_q_tabSizeHint(int  index) const { return QTabBar::tabSizeHint(index); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTabBar::timerEvent(event); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QTabBar::wheelEvent(event); }
};

class PythonQtWrapper_QTabBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonPosition SelectionBehavior )
enum ButtonPosition{
  LeftSide = QTabBar::LeftSide,   RightSide = QTabBar::RightSide};
enum SelectionBehavior{
  SelectLeftTab = QTabBar::SelectLeftTab,   SelectRightTab = QTabBar::SelectRightTab,   SelectPreviousTab = QTabBar::SelectPreviousTab};
public slots:
QTabBar* new_QTabBar(QWidget*  parent = nullptr);
void delete_QTabBar(QTabBar* obj) { delete obj; }
   QString  accessibleTabName(QTabBar* theWrappedObject, int  index) const;
   int  addTab(QTabBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   int  addTab(QTabBar* theWrappedObject, const QString&  text);
   bool  autoHide(QTabBar* theWrappedObject) const;
   bool  changeCurrentOnDrag(QTabBar* theWrappedObject) const;
   void py_q_changeEvent(QTabBar* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_changeEvent(arg__1));}
   int  count(QTabBar* theWrappedObject) const;
   int  currentIndex(QTabBar* theWrappedObject) const;
   bool  documentMode(QTabBar* theWrappedObject) const;
   bool  drawBase(QTabBar* theWrappedObject) const;
   Qt::TextElideMode  elideMode(QTabBar* theWrappedObject) const;
   bool  py_q_event(QTabBar* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_event(arg__1));}
   bool  expanding(QTabBar* theWrappedObject) const;
   void py_q_hideEvent(QTabBar* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_hideEvent(arg__1));}
   QSize  iconSize(QTabBar* theWrappedObject) const;
   void initStyleOption(QTabBar* theWrappedObject, QStyleOptionTab*  option, int  tabIndex) const;
   void py_q_initStyleOption(QTabBar* theWrappedObject, QStyleOptionTab*  option, int  tabIndex) const{  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_initStyleOption(option, tabIndex));}
   int  insertTab(QTabBar* theWrappedObject, int  index, const QIcon&  icon, const QString&  text);
   int  insertTab(QTabBar* theWrappedObject, int  index, const QString&  text);
   bool  isMovable(QTabBar* theWrappedObject) const;
   bool  isTabEnabled(QTabBar* theWrappedObject, int  index) const;
   bool  isTabVisible(QTabBar* theWrappedObject, int  index) const;
   void py_q_keyPressEvent(QTabBar* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   QSize  minimumSizeHint(QTabBar* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QTabBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_minimumSizeHint());}
   QSize  minimumTabSizeHint(QTabBar* theWrappedObject, int  index) const;
   QSize  py_q_minimumTabSizeHint(QTabBar* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_minimumTabSizeHint(index));}
   void py_q_mouseDoubleClickEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_mouseDoubleClickEvent(arg__1));}
   void py_q_mouseMoveEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void moveTab(QTabBar* theWrappedObject, int  from, int  to);
   void py_q_paintEvent(QTabBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void removeTab(QTabBar* theWrappedObject, int  index);
   void py_q_resizeEvent(QTabBar* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   QTabBar::SelectionBehavior  selectionBehaviorOnRemove(QTabBar* theWrappedObject) const;
   void setAccessibleTabName(QTabBar* theWrappedObject, int  index, const QString&  name);
   void setAutoHide(QTabBar* theWrappedObject, bool  hide);
   void setChangeCurrentOnDrag(QTabBar* theWrappedObject, bool  change);
   void setDocumentMode(QTabBar* theWrappedObject, bool  set);
   void setDrawBase(QTabBar* theWrappedObject, bool  drawTheBase);
   void setElideMode(QTabBar* theWrappedObject, Qt::TextElideMode  mode);
   void setExpanding(QTabBar* theWrappedObject, bool  enabled);
   void setIconSize(QTabBar* theWrappedObject, const QSize&  size);
   void setMovable(QTabBar* theWrappedObject, bool  movable);
   void setSelectionBehaviorOnRemove(QTabBar* theWrappedObject, QTabBar::SelectionBehavior  behavior);
   void setShape(QTabBar* theWrappedObject, QTabBar::Shape  shape);
   void setTabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position, QWidget*  widget);
   void setTabData(QTabBar* theWrappedObject, int  index, const QVariant&  data);
   void setTabEnabled(QTabBar* theWrappedObject, int  index, bool  enabled);
   void setTabIcon(QTabBar* theWrappedObject, int  index, const QIcon&  icon);
   void setTabText(QTabBar* theWrappedObject, int  index, const QString&  text);
   void setTabTextColor(QTabBar* theWrappedObject, int  index, const QColor&  color);
   void setTabToolTip(QTabBar* theWrappedObject, int  index, const QString&  tip);
   void setTabVisible(QTabBar* theWrappedObject, int  index, bool  visible);
   void setTabWhatsThis(QTabBar* theWrappedObject, int  index, const QString&  text);
   void setTabsClosable(QTabBar* theWrappedObject, bool  closable);
   void setUsesScrollButtons(QTabBar* theWrappedObject, bool  useButtons);
   QTabBar::Shape  shape(QTabBar* theWrappedObject) const;
   void py_q_showEvent(QTabBar* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  sizeHint(QTabBar* theWrappedObject) const;
   QSize  py_q_sizeHint(QTabBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_sizeHint());}
   int  tabAt(QTabBar* theWrappedObject, const QPoint&  pos) const;
   QWidget*  tabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position) const;
   QVariant  tabData(QTabBar* theWrappedObject, int  index) const;
   QIcon  tabIcon(QTabBar* theWrappedObject, int  index) const;
   void tabInserted(QTabBar* theWrappedObject, int  index);
   void py_q_tabInserted(QTabBar* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_tabInserted(index));}
   void tabLayoutChange(QTabBar* theWrappedObject);
   void py_q_tabLayoutChange(QTabBar* theWrappedObject){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_tabLayoutChange());}
   QRect  tabRect(QTabBar* theWrappedObject, int  index) const;
   void tabRemoved(QTabBar* theWrappedObject, int  index);
   void py_q_tabRemoved(QTabBar* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_tabRemoved(index));}
   QSize  tabSizeHint(QTabBar* theWrappedObject, int  index) const;
   QSize  py_q_tabSizeHint(QTabBar* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_tabSizeHint(index));}
   QString  tabText(QTabBar* theWrappedObject, int  index) const;
   QColor  tabTextColor(QTabBar* theWrappedObject, int  index) const;
   QString  tabToolTip(QTabBar* theWrappedObject, int  index) const;
   QString  tabWhatsThis(QTabBar* theWrappedObject, int  index) const;
   bool  tabsClosable(QTabBar* theWrappedObject) const;
   void py_q_timerEvent(QTabBar* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_timerEvent(event));}
   bool  usesScrollButtons(QTabBar* theWrappedObject) const;
   void py_q_wheelEvent(QTabBar* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_wheelEvent(event));}
};





class PythonQtShell_QTabWidget : public QTabWidget
{
public:
    PythonQtShell_QTabWidget(QWidget*  parent = nullptr):QTabWidget(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTabWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  Event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  width) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionTabWidgetFrame*  option) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
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
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabInserted(int  index) override;
void tabRemoved(int  index) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTabWidget : public QTabWidget
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_initStyleOption(QStyleOptionTabWidgetFrame*  option) const { this->initStyleOption(option); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_setTabBar(QTabBar*  arg__1) { this->setTabBar(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_tabInserted(int  index) { this->tabInserted(index); }
inline void promoted_tabRemoved(int  index) { this->tabRemoved(index); }
inline void py_q_changeEvent(QEvent*  arg__1) { QTabWidget::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QTabWidget::event(arg__1); }
inline bool  py_q_hasHeightForWidth() const { return QTabWidget::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  width) const { return QTabWidget::heightForWidth(width); }
inline void py_q_initStyleOption(QStyleOptionTabWidgetFrame*  option) const { QTabWidget::initStyleOption(option); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QTabWidget::keyPressEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QTabWidget::minimumSizeHint(); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QTabWidget::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QTabWidget::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QTabWidget::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QTabWidget::sizeHint(); }
inline void py_q_tabInserted(int  index) { QTabWidget::tabInserted(index); }
inline void py_q_tabRemoved(int  index) { QTabWidget::tabRemoved(index); }
};

class PythonQtWrapper_QTabWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTabWidget* new_QTabWidget(QWidget*  parent = nullptr);
void delete_QTabWidget(QTabWidget* obj) { delete obj; }
   int  addTab(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  label);
   int  addTab(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  arg__2);
   void py_q_changeEvent(QTabWidget* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void clear(QTabWidget* theWrappedObject);
   QWidget*  cornerWidget(QTabWidget* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   int  count(QTabWidget* theWrappedObject) const;
   int  currentIndex(QTabWidget* theWrappedObject) const;
   QWidget*  currentWidget(QTabWidget* theWrappedObject) const;
   bool  documentMode(QTabWidget* theWrappedObject) const;
   Qt::TextElideMode  elideMode(QTabWidget* theWrappedObject) const;
   bool  py_q_event(QTabWidget* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_hasHeightForWidth(QTabWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QTabWidget* theWrappedObject, int  width) const{  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_heightForWidth(width));}
   QSize  iconSize(QTabWidget* theWrappedObject) const;
   int  indexOf(QTabWidget* theWrappedObject, const QWidget*  widget) const;
   void initStyleOption(QTabWidget* theWrappedObject, QStyleOptionTabWidgetFrame*  option) const;
   void py_q_initStyleOption(QTabWidget* theWrappedObject, QStyleOptionTabWidgetFrame*  option) const{  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_initStyleOption(option));}
   int  insertTab(QTabWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  label);
   int  insertTab(QTabWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  arg__3);
   bool  isMovable(QTabWidget* theWrappedObject) const;
   bool  isTabEnabled(QTabWidget* theWrappedObject, int  index) const;
   bool  isTabVisible(QTabWidget* theWrappedObject, int  index) const;
   void py_q_keyPressEvent(QTabWidget* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   QSize  minimumSizeHint(QTabWidget* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QTabWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_paintEvent(QTabWidget* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void removeTab(QTabWidget* theWrappedObject, int  index);
   void py_q_resizeEvent(QTabWidget* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setCornerWidget(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setDocumentMode(QTabWidget* theWrappedObject, bool  set);
   void setElideMode(QTabWidget* theWrappedObject, Qt::TextElideMode  mode);
   void setIconSize(QTabWidget* theWrappedObject, const QSize&  size);
   void setMovable(QTabWidget* theWrappedObject, bool  movable);
   void setTabBar(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QTabBar* >  arg__1);
   void setTabBarAutoHide(QTabWidget* theWrappedObject, bool  enabled);
   void setTabEnabled(QTabWidget* theWrappedObject, int  index, bool  enabled);
   void setTabIcon(QTabWidget* theWrappedObject, int  index, const QIcon&  icon);
   void setTabPosition(QTabWidget* theWrappedObject, QTabWidget::TabPosition  position);
   void setTabShape(QTabWidget* theWrappedObject, QTabWidget::TabShape  s);
   void setTabText(QTabWidget* theWrappedObject, int  index, const QString&  text);
   void setTabToolTip(QTabWidget* theWrappedObject, int  index, const QString&  tip);
   void setTabVisible(QTabWidget* theWrappedObject, int  index, bool  visible);
   void setTabWhatsThis(QTabWidget* theWrappedObject, int  index, const QString&  text);
   void setTabsClosable(QTabWidget* theWrappedObject, bool  closeable);
   void setUsesScrollButtons(QTabWidget* theWrappedObject, bool  useButtons);
   void py_q_showEvent(QTabWidget* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  sizeHint(QTabWidget* theWrappedObject) const;
   QSize  py_q_sizeHint(QTabWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_sizeHint());}
   QTabBar*  tabBar(QTabWidget* theWrappedObject) const;
   bool  tabBarAutoHide(QTabWidget* theWrappedObject) const;
   QIcon  tabIcon(QTabWidget* theWrappedObject, int  index) const;
   void tabInserted(QTabWidget* theWrappedObject, int  index);
   void py_q_tabInserted(QTabWidget* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_tabInserted(index));}
   QTabWidget::TabPosition  tabPosition(QTabWidget* theWrappedObject) const;
   void tabRemoved(QTabWidget* theWrappedObject, int  index);
   void py_q_tabRemoved(QTabWidget* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_tabRemoved(index));}
   QTabWidget::TabShape  tabShape(QTabWidget* theWrappedObject) const;
   QString  tabText(QTabWidget* theWrappedObject, int  index) const;
   QString  tabToolTip(QTabWidget* theWrappedObject, int  index) const;
   QString  tabWhatsThis(QTabWidget* theWrappedObject, int  index) const;
   bool  tabsClosable(QTabWidget* theWrappedObject) const;
   bool  usesScrollButtons(QTabWidget* theWrappedObject) const;
   QWidget*  widget(QTabWidget* theWrappedObject, int  index) const;
};





class PythonQtShell_QTableView : public QTableView
{
public:
    PythonQtShell_QTableView(QWidget*  parent = nullptr):QTableView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTableView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEnterEvent*  Event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  p) const override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
void initViewItemOption(QStyleOptionViewItem*  option) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
QAbstractItemDelegate*  itemDelegateForIndex(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setModel(QAbstractItemModel*  model) override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTableView : public QTableView
{ public:
inline void promoted_columnCountChanged(int  oldCount, int  newCount) { this->columnCountChanged(oldCount, newCount); }
inline void promoted_columnMoved(int  column, int  oldIndex, int  newIndex) { this->columnMoved(column, oldIndex, newIndex); }
inline void promoted_columnResized(int  column, int  oldWidth, int  newWidth) { this->columnResized(column, oldWidth, newWidth); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { this->currentChanged(current, previous); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline void promoted_horizontalScrollbarAction(int  action) { this->horizontalScrollbarAction(action); }
inline void promoted_initViewItemOption(QStyleOptionViewItem*  option) const { this->initViewItemOption(option); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_rowCountChanged(int  oldCount, int  newCount) { this->rowCountChanged(oldCount, newCount); }
inline void promoted_rowMoved(int  row, int  oldIndex, int  newIndex) { this->rowMoved(row, oldIndex, newIndex); }
inline void promoted_rowResized(int  row, int  oldHeight, int  newHeight) { this->rowResized(row, oldHeight, newHeight); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return this->selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { this->selectionChanged(selected, deselected); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline int  promoted_sizeHintForColumn(int  column) const { return this->sizeHintForColumn(column); }
inline int  promoted_sizeHintForRow(int  row) const { return this->sizeHintForRow(row); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void promoted_updateGeometries() { this->updateGeometries(); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline void promoted_verticalScrollbarAction(int  action) { this->verticalScrollbarAction(action); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTableView::currentChanged(current, previous); }
inline void py_q_doItemsLayout() { QTableView::doItemsLayout(); }
inline int  py_q_horizontalOffset() const { return QTableView::horizontalOffset(); }
inline void py_q_horizontalScrollbarAction(int  action) { QTableView::horizontalScrollbarAction(action); }
inline QModelIndex  py_q_indexAt(const QPoint&  p) const { return QTableView::indexAt(p); }
inline void py_q_initViewItemOption(QStyleOptionViewItem*  option) const { QTableView::initViewItemOption(option); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QTableView::isIndexHidden(index); }
inline QModelIndex  py_q_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QTableView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void py_q_paintEvent(QPaintEvent*  e) { QTableView::paintEvent(e); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QTableView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTableView::scrollTo(index, hint); }
inline QList<QModelIndex >  py_q_selectedIndexes() const { return QTableView::selectedIndexes(); }
inline void py_q_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTableView::selectionChanged(selected, deselected); }
inline void py_q_setModel(QAbstractItemModel*  model) { QTableView::setModel(model); }
inline void py_q_setRootIndex(const QModelIndex&  index) { QTableView::setRootIndex(index); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTableView::setSelection(rect, command); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QTableView::setSelectionModel(selectionModel); }
inline int  py_q_sizeHintForColumn(int  column) const { return QTableView::sizeHintForColumn(column); }
inline int  py_q_sizeHintForRow(int  row) const { return QTableView::sizeHintForRow(row); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTableView::timerEvent(event); }
inline void py_q_updateGeometries() { QTableView::updateGeometries(); }
inline int  py_q_verticalOffset() const { return QTableView::verticalOffset(); }
inline void py_q_verticalScrollbarAction(int  action) { QTableView::verticalScrollbarAction(action); }
inline QSize  py_q_viewportSizeHint() const { return QTableView::viewportSizeHint(); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QTableView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QTableView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QTableView : public QObject
{ Q_OBJECT
public:
public slots:
QTableView* new_QTableView(QWidget*  parent = nullptr);
void delete_QTableView(QTableView* obj) { delete obj; }
   void clearSpans(QTableView* theWrappedObject);
   int  columnAt(QTableView* theWrappedObject, int  x) const;
   int  columnSpan(QTableView* theWrappedObject, int  row, int  column) const;
   int  columnViewportPosition(QTableView* theWrappedObject, int  column) const;
   int  columnWidth(QTableView* theWrappedObject, int  column) const;
   void py_q_currentChanged(QTableView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_currentChanged(current, previous));}
   void py_q_doItemsLayout(QTableView* theWrappedObject){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_doItemsLayout());}
   Qt::PenStyle  gridStyle(QTableView* theWrappedObject) const;
   QHeaderView*  horizontalHeader(QTableView* theWrappedObject) const;
   int  py_q_horizontalOffset(QTableView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_horizontalOffset());}
   void py_q_horizontalScrollbarAction(QTableView* theWrappedObject, int  action){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_horizontalScrollbarAction(action));}
   QModelIndex  py_q_indexAt(QTableView* theWrappedObject, const QPoint&  p) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_indexAt(p));}
   void py_q_initViewItemOption(QTableView* theWrappedObject, QStyleOptionViewItem*  option) const{  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_initViewItemOption(option));}
   bool  isColumnHidden(QTableView* theWrappedObject, int  column) const;
   bool  isCornerButtonEnabled(QTableView* theWrappedObject) const;
   bool  py_q_isIndexHidden(QTableView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isRowHidden(QTableView* theWrappedObject, int  row) const;
   bool  isSortingEnabled(QTableView* theWrappedObject) const;
   QModelIndex  py_q_moveCursor(QTableView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers){  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_moveCursor(cursorAction, modifiers));}
   void py_q_paintEvent(QTableView* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_paintEvent(e));}
   int  rowAt(QTableView* theWrappedObject, int  y) const;
   int  rowHeight(QTableView* theWrappedObject, int  row) const;
   int  rowSpan(QTableView* theWrappedObject, int  row, int  column) const;
   int  rowViewportPosition(QTableView* theWrappedObject, int  row) const;
   void py_q_scrollContentsBy(QTableView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QTableView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   QList<QModelIndex >  py_q_selectedIndexes(QTableView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_selectedIndexes());}
   void py_q_selectionChanged(QTableView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_selectionChanged(selected, deselected));}
   void setColumnHidden(QTableView* theWrappedObject, int  column, bool  hide);
   void setColumnWidth(QTableView* theWrappedObject, int  column, int  width);
   void setCornerButtonEnabled(QTableView* theWrappedObject, bool  enable);
   void setGridStyle(QTableView* theWrappedObject, Qt::PenStyle  style);
   void setHorizontalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   void py_q_setModel(QTableView* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_setModel(model));}
   void py_q_setRootIndex(QTableView* theWrappedObject, const QModelIndex&  index){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_setRootIndex(index));}
   void setRowHeight(QTableView* theWrappedObject, int  row, int  height);
   void setRowHidden(QTableView* theWrappedObject, int  row, bool  hide);
   void py_q_setSelection(QTableView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_setSelection(rect, command));}
   void py_q_setSelectionModel(QTableView* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   void setSortingEnabled(QTableView* theWrappedObject, bool  enable);
   void setSpan(QTableView* theWrappedObject, int  row, int  column, int  rowSpan, int  columnSpan);
   void setVerticalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   void setWordWrap(QTableView* theWrappedObject, bool  on);
   bool  showGrid(QTableView* theWrappedObject) const;
   int  py_q_sizeHintForColumn(QTableView* theWrappedObject, int  column) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_sizeHintForColumn(column));}
   int  py_q_sizeHintForRow(QTableView* theWrappedObject, int  row) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_sizeHintForRow(row));}
   void py_q_timerEvent(QTableView* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_timerEvent(event));}
   void py_q_updateGeometries(QTableView* theWrappedObject){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_updateGeometries());}
   QHeaderView*  verticalHeader(QTableView* theWrappedObject) const;
   int  py_q_verticalOffset(QTableView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_verticalOffset());}
   void py_q_verticalScrollbarAction(QTableView* theWrappedObject, int  action){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_verticalScrollbarAction(action));}
   QSize  py_q_viewportSizeHint(QTableView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_viewportSizeHint());}
   QRect  py_q_visualRect(QTableView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QTableView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
   bool  wordWrap(QTableView* theWrappedObject) const;
};





class PythonQtShell_QTableWidget : public QTableWidget
{
public:
    PythonQtShell_QTableWidget(QWidget*  parent = nullptr):QTableWidget(parent),_wrapper(nullptr) {};
    PythonQtShell_QTableWidget(int  rows, int  columns, QWidget*  parent = nullptr):QTableWidget(rows, columns, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTableWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
bool  dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEnterEvent*  Event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  p) const override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
void initViewItemOption(QStyleOptionViewItem*  option) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
QAbstractItemDelegate*  itemDelegateForIndex(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QMimeData*  mimeData(const QList<QTableWidgetItem* >&  items) const override;
QStringList  mimeTypes() const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
Qt::DropActions  supportedDropActions() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTableWidget : public QTableWidget
{ public:
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) { return this->dropMimeData(row, column, data, action); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline QMimeData*  promoted_mimeData(const QList<QTableWidgetItem* >&  items) const { return this->mimeData(items); }
inline QStringList  promoted_mimeTypes() const { return this->mimeTypes(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return this->supportedDropActions(); }
inline void py_q_dropEvent(QDropEvent*  event) { QTableWidget::dropEvent(event); }
inline bool  py_q_dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) { return QTableWidget::dropMimeData(row, column, data, action); }
inline bool  py_q_event(QEvent*  e) { return QTableWidget::event(e); }
inline QMimeData*  py_q_mimeData(const QList<QTableWidgetItem* >&  items) const { return QTableWidget::mimeData(items); }
inline QStringList  py_q_mimeTypes() const { return QTableWidget::mimeTypes(); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QTableWidget::supportedDropActions(); }
};

class PythonQtWrapper_QTableWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidget* new_QTableWidget(QWidget*  parent = nullptr);
QTableWidget* new_QTableWidget(int  rows, int  columns, QWidget*  parent = nullptr);
void delete_QTableWidget(QTableWidget* obj) { delete obj; }
   QWidget*  cellWidget(QTableWidget* theWrappedObject, int  row, int  column) const;
   void closePersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   int  column(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  columnCount(QTableWidget* theWrappedObject) const;
   int  currentColumn(QTableWidget* theWrappedObject) const;
   QTableWidgetItem*  currentItem(QTableWidget* theWrappedObject) const;
   int  currentRow(QTableWidget* theWrappedObject) const;
   void py_q_dropEvent(QTableWidget* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_dropEvent(event));}
   bool  dropMimeData(QTableWidget* theWrappedObject, int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
   bool  py_q_dropMimeData(QTableWidget* theWrappedObject, int  row, int  column, const QMimeData*  data, Qt::DropAction  action){  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_dropMimeData(row, column, data, action));}
   void editItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   bool  py_q_event(QTableWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_event(e));}
   QList<QTableWidgetItem* >  findItems(QTableWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
   QTableWidgetItem*  horizontalHeaderItem(QTableWidget* theWrappedObject, int  column) const;
   QModelIndex  indexFromItem(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   bool  isPersistentEditorOpen(QTableWidget* theWrappedObject, QTableWidgetItem*  item) const;
   QTableWidgetItem*  item(QTableWidget* theWrappedObject, int  row, int  column) const;
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, const QPoint&  p) const;
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, int  x, int  y) const;
   QTableWidgetItem*  itemFromIndex(QTableWidget* theWrappedObject, const QModelIndex&  index) const;
   const QTableWidgetItem*  itemPrototype(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetItem* >  items(QTableWidget* theWrappedObject, const QMimeData*  data) const;
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QTableWidget* theWrappedObject, const QList<QTableWidgetItem* >&  items) const;
   PythonQtPassOwnershipToPython<QMimeData*  > py_q_mimeData(QTableWidget* theWrappedObject, const QList<QTableWidgetItem* >&  items) const{  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_mimeData(items));}
   QStringList  mimeTypes(QTableWidget* theWrappedObject) const;
   QStringList  py_q_mimeTypes(QTableWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_mimeTypes());}
   void openPersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void removeCellWidget(QTableWidget* theWrappedObject, int  row, int  column);
   int  row(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  rowCount(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetItem* >  selectedItems(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetSelectionRange >  selectedRanges(QTableWidget* theWrappedObject) const;
   void setCellWidget(QTableWidget* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setColumnCount(QTableWidget* theWrappedObject, int  columns);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column, QItemSelectionModel::SelectionFlags  command);
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   void setHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item);
   void setHorizontalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   void setItem(QTableWidget* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item);
   void setItemPrototype(QTableWidget* theWrappedObject, PythonQtPassOwnershipToCPP<const QTableWidgetItem* >  item);
   void setRangeSelected(QTableWidget* theWrappedObject, const QTableWidgetSelectionRange&  range, bool  select);
   void setRowCount(QTableWidget* theWrappedObject, int  rows);
   void setVerticalHeaderItem(QTableWidget* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item);
   void setVerticalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   void sortItems(QTableWidget* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   Qt::DropActions  supportedDropActions(QTableWidget* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QTableWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_supportedDropActions());}
   PythonQtPassOwnershipToPython<QTableWidgetItem*  > takeHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column);
   PythonQtPassOwnershipToPython<QTableWidgetItem*  > takeItem(QTableWidget* theWrappedObject, int  row, int  column);
   PythonQtPassOwnershipToPython<QTableWidgetItem*  > takeVerticalHeaderItem(QTableWidget* theWrappedObject, int  row);
   QTableWidgetItem*  verticalHeaderItem(QTableWidget* theWrappedObject, int  row) const;
   int  visualColumn(QTableWidget* theWrappedObject, int  logicalColumn) const;
   QRect  visualItemRect(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  visualRow(QTableWidget* theWrappedObject, int  logicalRow) const;
};





class PythonQtShell_QTableWidgetItem : public QTableWidgetItem
{
public:
    PythonQtShell_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type):QTableWidgetItem(icon, text, type),_wrapper(nullptr) {};
    PythonQtShell_QTableWidgetItem(const QString&  text, int  type = Type):QTableWidgetItem(text, type),_wrapper(nullptr) {};
    PythonQtShell_QTableWidgetItem(int  type = Type):QTableWidgetItem(type),_wrapper(nullptr) {};

   ~PythonQtShell_QTableWidgetItem() override;

QTableWidgetItem*  clone() const override;
QVariant  data(int  role) const override;
void read(QDataStream&  in) override;
void setData(int  role, const QVariant&  value) override;
void write(QDataStream&  out) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTableWidgetItem : public QTableWidgetItem
{ public:
inline QTableWidgetItem*  py_q_clone() const { return QTableWidgetItem::clone(); }
inline QVariant  py_q_data(int  role) const { return QTableWidgetItem::data(role); }
inline void py_q_read(QDataStream&  in) { QTableWidgetItem::read(in); }
inline void py_q_setData(int  role, const QVariant&  value) { QTableWidgetItem::setData(role, value); }
inline void py_q_write(QDataStream&  out) const { QTableWidgetItem::write(out); }
};

class PythonQtWrapper_QTableWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QTableWidgetItem::Type,   UserType = QTableWidgetItem::UserType};
public slots:
QTableWidgetItem* new_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(int  type = Type);
void delete_QTableWidgetItem(QTableWidgetItem* obj) { delete obj; }
   QBrush  background(QTableWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QTableWidgetItem* theWrappedObject) const;
   QTableWidgetItem*  clone(QTableWidgetItem* theWrappedObject) const;
   QTableWidgetItem*  py_q_clone(QTableWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_clone());}
   int  column(QTableWidgetItem* theWrappedObject) const;
   QVariant  data(QTableWidgetItem* theWrappedObject, int  role) const;
   QVariant  py_q_data(QTableWidgetItem* theWrappedObject, int  role) const{  return (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_data(role));}
   Qt::ItemFlags  flags(QTableWidgetItem* theWrappedObject) const;
   QFont  font(QTableWidgetItem* theWrappedObject) const;
   QBrush  foreground(QTableWidgetItem* theWrappedObject) const;
   QIcon  icon(QTableWidgetItem* theWrappedObject) const;
   bool  isSelected(QTableWidgetItem* theWrappedObject) const;
   void writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in);
   void read(QTableWidgetItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QTableWidgetItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_read(in));}
   int  row(QTableWidgetItem* theWrappedObject) const;
   void setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   void py_q_setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value){  (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_setData(role, value));}
   void setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QTableWidgetItem* theWrappedObject, const QFont&  font);
   void setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon);
   void setSelected(QTableWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size);
   void setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip);
   void setText(QTableWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QTableWidgetItem* theWrappedObject, Qt::Alignment  alignment);
   void setTextAlignment(QTableWidgetItem* theWrappedObject, Qt::AlignmentFlag  alignment);
   void setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment);
   void setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip);
   void setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QTableWidgetItem* theWrappedObject) const;
   QString  statusTip(QTableWidgetItem* theWrappedObject) const;
   QTableWidget*  tableWidget(QTableWidgetItem* theWrappedObject) const;
   QString  text(QTableWidgetItem* theWrappedObject) const;
   int  textAlignment(QTableWidgetItem* theWrappedObject) const;
   QString  toolTip(QTableWidgetItem* theWrappedObject) const;
   int  type(QTableWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTableWidgetItem* theWrappedObject) const;
   void write(QTableWidgetItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QTableWidgetItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_write(out));}
};





class PythonQtWrapper_QTableWidgetSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange();
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(int  top, int  left, int  bottom, int  right);
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(const QTableWidgetSelectionRange& other) {
QTableWidgetSelectionRange* a = new QTableWidgetSelectionRange();
*((QTableWidgetSelectionRange*)a) = other;
return a; }
void delete_QTableWidgetSelectionRange(QTableWidgetSelectionRange* obj) { delete obj; }
   int  bottomRow(QTableWidgetSelectionRange* theWrappedObject) const;
   int  columnCount(QTableWidgetSelectionRange* theWrappedObject) const;
   int  leftColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   bool  __ne__(QTableWidgetSelectionRange* theWrappedObject, const QTableWidgetSelectionRange&  rhs);
   bool  __eq__(QTableWidgetSelectionRange* theWrappedObject, const QTableWidgetSelectionRange&  rhs);
   int  rightColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   int  rowCount(QTableWidgetSelectionRange* theWrappedObject) const;
   int  topRow(QTableWidgetSelectionRange* theWrappedObject) const;
};





class PythonQtShell_QTabletEvent : public QTabletEvent
{
public:
    PythonQtShell_QTabletEvent(QEvent::Type  t, const QPointingDevice*  device, const QPointF&  pos, const QPointF&  globalPos, qreal  pressure, float  xTilt, float  yTilt, float  tangentialPressure, qreal  rotation, float  z, Qt::KeyboardModifiers  keyState, Qt::MouseButton  button, Qt::MouseButtons  buttons):QTabletEvent(t, device, pos, globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, button, buttons),_wrapper(nullptr) {};
    PythonQtShell_QTabletEvent(const QTabletEvent&  arg__1):QTabletEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QTabletEvent() override;

QTabletEvent*  clone() const override;
bool  isBeginEvent() const override;
bool  isEndEvent() const override;
bool  isUpdateEvent() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTabletEvent : public QTabletEvent
{ public:
inline QTabletEvent&  promoted_operator_assign(const QTabletEvent&  other) { return this->operator=(other); }
inline QTabletEvent*  py_q_clone() const { return QTabletEvent::clone(); }
};

class PythonQtWrapper_QTabletEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTabletEvent* new_QTabletEvent(QEvent::Type  t, const QPointingDevice*  device, const QPointF&  pos, const QPointF&  globalPos, qreal  pressure, float  xTilt, float  yTilt, float  tangentialPressure, qreal  rotation, float  z, Qt::KeyboardModifiers  keyState, Qt::MouseButton  button, Qt::MouseButtons  buttons);
QTabletEvent* new_QTabletEvent(const QTabletEvent&  arg__1);
void delete_QTabletEvent(QTabletEvent* obj) { delete obj; }
   QTabletEvent*  py_q_clone(QTabletEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabletEvent*)theWrappedObject)->py_q_clone());}
   QPoint  globalPos(QTabletEvent* theWrappedObject) const;
   const QPointF  globalPosF(QTabletEvent* theWrappedObject) const;
   int  globalX(QTabletEvent* theWrappedObject) const;
   int  globalY(QTabletEvent* theWrappedObject) const;
   qreal  hiResGlobalX(QTabletEvent* theWrappedObject) const;
   qreal  hiResGlobalY(QTabletEvent* theWrappedObject) const;
   QTabletEvent*  operator_assign(QTabletEvent* theWrappedObject, const QTabletEvent&  other);
   QPoint  pos(QTabletEvent* theWrappedObject) const;
   const QPointF  posF(QTabletEvent* theWrappedObject) const;
   qreal  pressure(QTabletEvent* theWrappedObject) const;
   qreal  rotation(QTabletEvent* theWrappedObject) const;
   qreal  tangentialPressure(QTabletEvent* theWrappedObject) const;
   qint64  uniqueId(QTabletEvent* theWrappedObject) const;
   int  x(QTabletEvent* theWrappedObject) const;
   qreal  xTilt(QTabletEvent* theWrappedObject) const;
   int  y(QTabletEvent* theWrappedObject) const;
   qreal  yTilt(QTabletEvent* theWrappedObject) const;
   qreal  z(QTabletEvent* theWrappedObject) const;
};





class PythonQtShell_QTapAndHoldGesture : public QTapAndHoldGesture
{
public:
    PythonQtShell_QTapAndHoldGesture(QObject*  parent = nullptr):QTapAndHoldGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTapAndHoldGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTapAndHoldGesture : public QObject
{ Q_OBJECT
public:
public slots:
QTapAndHoldGesture* new_QTapAndHoldGesture(QObject*  parent = nullptr);
void delete_QTapAndHoldGesture(QTapAndHoldGesture* obj) { delete obj; }
   QPointF  position(QTapAndHoldGesture* theWrappedObject) const;
   void setPosition(QTapAndHoldGesture* theWrappedObject, const QPointF&  pos);
   void static_QTapAndHoldGesture_setTimeout(int  msecs);
   int  static_QTapAndHoldGesture_timeout();
};





class PythonQtShell_QTapGesture : public QTapGesture
{
public:
    PythonQtShell_QTapGesture(QObject*  parent = nullptr):QTapGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTapGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTapGesture : public QObject
{ Q_OBJECT
public:
public slots:
QTapGesture* new_QTapGesture(QObject*  parent = nullptr);
void delete_QTapGesture(QTapGesture* obj) { delete obj; }
   QPointF  position(QTapGesture* theWrappedObject) const;
   void setPosition(QTapGesture* theWrappedObject, const QPointF&  pos);
};


