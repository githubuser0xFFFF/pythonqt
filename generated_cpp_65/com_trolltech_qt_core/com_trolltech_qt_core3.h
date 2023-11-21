#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdeadlinetimer.h>
#include <qeasingcurve.h>
#include <qfile.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qreadwritelock.h>
#include <qrunnable.h>
#include <qsystemsemaphore.h>
#include <qtemporarydir.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
#include <qtextstream.h>
#include <qthread.h>
#include <qthreadpool.h>
#include <qtimeline.h>
#include <qtimer.h>
#include <qtimezone.h>
#include <qtranslator.h>
#include <qurl.h>
#include <qurlquery.h>
#include <quuid.h>
#include <qvariantanimation.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>



class PythonQtWrapper_QSystemSemaphore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AccessMode SystemSemaphoreError )
enum AccessMode{
  Open = QSystemSemaphore::Open,   Create = QSystemSemaphore::Create};
enum SystemSemaphoreError{
  NoError = QSystemSemaphore::NoError,   PermissionDenied = QSystemSemaphore::PermissionDenied,   KeyError = QSystemSemaphore::KeyError,   AlreadyExists = QSystemSemaphore::AlreadyExists,   NotFound = QSystemSemaphore::NotFound,   OutOfResources = QSystemSemaphore::OutOfResources,   UnknownError = QSystemSemaphore::UnknownError};
public slots:
QSystemSemaphore* new_QSystemSemaphore(const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
void delete_QSystemSemaphore(QSystemSemaphore* obj) { delete obj; }
   bool  acquire(QSystemSemaphore* theWrappedObject);
   QSystemSemaphore::SystemSemaphoreError  error(QSystemSemaphore* theWrappedObject) const;
   QString  errorString(QSystemSemaphore* theWrappedObject) const;
   QString  key(QSystemSemaphore* theWrappedObject) const;
   bool  release(QSystemSemaphore* theWrappedObject, int  n = 1);
   void setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
   QString  static_QSystemSemaphore_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
};





class PythonQtWrapper_QTemporaryDir : public QObject
{ Q_OBJECT
public:
public slots:
QTemporaryDir* new_QTemporaryDir();
QTemporaryDir* new_QTemporaryDir(const QString&  templateName);
void delete_QTemporaryDir(QTemporaryDir* obj) { delete obj; }
   bool  autoRemove(QTemporaryDir* theWrappedObject) const;
   QString  errorString(QTemporaryDir* theWrappedObject) const;
   QString  filePath(QTemporaryDir* theWrappedObject, const QString&  fileName) const;
   bool  isValid(QTemporaryDir* theWrappedObject) const;
   QString  path(QTemporaryDir* theWrappedObject) const;
   bool  remove(QTemporaryDir* theWrappedObject);
   void setAutoRemove(QTemporaryDir* theWrappedObject, bool  b);
   void swap(QTemporaryDir* theWrappedObject, QTemporaryDir&  other);
    bool __nonzero__(QTemporaryDir* obj) { return obj->isValid(); }
};





class PythonQtShell_QTemporaryFile : public QTemporaryFile
{
public:
    PythonQtShell_QTemporaryFile():QTemporaryFile(),_wrapper(nullptr) {};
    PythonQtShell_QTemporaryFile(QObject*  parent):QTemporaryFile(parent),_wrapper(nullptr) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName):QTemporaryFile(templateName),_wrapper(nullptr) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName, QObject*  parent):QTemporaryFile(templateName, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTemporaryFile() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QString  fileName() const override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  flags) override;
QFileDevice::Permissions  permissions() const override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  resize(qint64  sz) override;
bool  seek(qint64  offset) override;
bool  setPermissions(QFileDevice::Permissions  permissionSpec) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTemporaryFile : public QTemporaryFile
{ public:
inline bool  promoted_open(QIODeviceBase::OpenMode  flags) { return this->open(flags); }
inline QString  py_q_fileName() const { return QTemporaryFile::fileName(); }
inline bool  py_q_open(QIODeviceBase::OpenMode  flags) { return QTemporaryFile::open(flags); }
};

class PythonQtWrapper_QTemporaryFile : public QObject
{ Q_OBJECT
public:
public slots:
QTemporaryFile* new_QTemporaryFile();
QTemporaryFile* new_QTemporaryFile(QObject*  parent);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName, QObject*  parent);
void delete_QTemporaryFile(QTemporaryFile* obj) { delete obj; }
   bool  autoRemove(QTemporaryFile* theWrappedObject) const;
   QTemporaryFile*  static_QTemporaryFile_createNativeFile(QFile&  file);
   QTemporaryFile*  static_QTemporaryFile_createNativeFile(const QString&  fileName);
   QString  fileName(QTemporaryFile* theWrappedObject) const;
   QString  py_q_fileName(QTemporaryFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->py_q_fileName());}
   QString  fileTemplate(QTemporaryFile* theWrappedObject) const;
   bool  open(QTemporaryFile* theWrappedObject);
   bool  py_q_open(QTemporaryFile* theWrappedObject, QIODeviceBase::OpenMode  flags){  return (((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->py_q_open(flags));}
   bool  rename(QTemporaryFile* theWrappedObject, const QString&  newName);
   void setAutoRemove(QTemporaryFile* theWrappedObject, bool  b);
   void setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name);
};





class PythonQtWrapper_QTextBoundaryFinder : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BoundaryReason BoundaryType )
Q_FLAGS(BoundaryReasons )
enum BoundaryReason{
  NotAtBoundary = QTextBoundaryFinder::NotAtBoundary,   BreakOpportunity = QTextBoundaryFinder::BreakOpportunity,   StartOfItem = QTextBoundaryFinder::StartOfItem,   EndOfItem = QTextBoundaryFinder::EndOfItem,   MandatoryBreak = QTextBoundaryFinder::MandatoryBreak,   SoftHyphen = QTextBoundaryFinder::SoftHyphen};
enum BoundaryType{
  Grapheme = QTextBoundaryFinder::Grapheme,   Word = QTextBoundaryFinder::Word,   Sentence = QTextBoundaryFinder::Sentence,   Line = QTextBoundaryFinder::Line};
Q_DECLARE_FLAGS(BoundaryReasons, BoundaryReason)
public slots:
QTextBoundaryFinder* new_QTextBoundaryFinder();
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QChar*  chars, qsizetype  length, unsigned char*  buffer = nullptr, qsizetype  bufferSize = 0);
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string);
QTextBoundaryFinder* new_QTextBoundaryFinder(const QTextBoundaryFinder&  other);
void delete_QTextBoundaryFinder(QTextBoundaryFinder* obj) { delete obj; }
   QTextBoundaryFinder::BoundaryReasons  boundaryReasons(QTextBoundaryFinder* theWrappedObject) const;
   bool  isAtBoundary(QTextBoundaryFinder* theWrappedObject) const;
   bool  isValid(QTextBoundaryFinder* theWrappedObject) const;
   qsizetype  position(QTextBoundaryFinder* theWrappedObject) const;
   void setPosition(QTextBoundaryFinder* theWrappedObject, qsizetype  position);
   QString  string(QTextBoundaryFinder* theWrappedObject) const;
   void toEnd(QTextBoundaryFinder* theWrappedObject);
   qsizetype  toNextBoundary(QTextBoundaryFinder* theWrappedObject);
   qsizetype  toPreviousBoundary(QTextBoundaryFinder* theWrappedObject);
   void toStart(QTextBoundaryFinder* theWrappedObject);
   QTextBoundaryFinder::BoundaryType  type(QTextBoundaryFinder* theWrappedObject) const;
    bool __nonzero__(QTextBoundaryFinder* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextStream : public QTextStream
{
public:
    PythonQtShell_QTextStream():QTextStream(),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QByteArray*  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite):QTextStream(array, openMode),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QIODevice*  device):QTextStream(device),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QString*  string, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite):QTextStream(string, openMode),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(const QByteArray&  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadOnly):QTextStream(array, openMode),_wrapper(nullptr) {};

   ~PythonQtShell_QTextStream() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FieldAlignment NumberFlag RealNumberNotation Status )
Q_FLAGS(NumberFlags )
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData,   WriteFailed = QTextStream::WriteFailed};
Q_DECLARE_FLAGS(NumberFlags, NumberFlag)
public slots:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QByteArray*  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite);
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(QString*  string, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite);
QTextStream* new_QTextStream(const QByteArray&  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; }
   bool  atEnd(QTextStream* theWrappedObject) const;
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   QIODevice*  device(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   int  fieldWidth(QTextStream* theWrappedObject) const;
   void flush(QTextStream* theWrappedObject);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   int  integerBase(QTextStream* theWrappedObject) const;
   QLocale  locale(QTextStream* theWrappedObject) const;
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QTextStream*  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream*  writeDouble(QTextStream* theWrappedObject, double  f);
   QTextStream*  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream*  writeLongLong(QTextStream* theWrappedObject, qlonglong  i);
   QTextStream*  writeInt(QTextStream* theWrappedObject, signed int  i);
   QTextStream*  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream*  readByte(QTextStream* theWrappedObject, char&  ch);
   QTextStream*  readDouble(QTextStream* theWrappedObject, double&  f);
   QTextStream*  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream*  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   QTextStream*  readInt(QTextStream* theWrappedObject, signed int&  i);
   QTextStream*  readShort(QTextStream* theWrappedObject, signed short&  i);
   QChar  padChar(QTextStream* theWrappedObject) const;
   qint64  pos(QTextStream* theWrappedObject) const;
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   QString  readAll(QTextStream* theWrappedObject);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   bool  readLineInto(QTextStream* theWrappedObject, QString*  line, qint64  maxlen = 0);
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   void reset(QTextStream* theWrappedObject);
   void resetStatus(QTextStream* theWrappedObject);
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   void setLocale(QTextStream* theWrappedObject, const QLocale&  locale);
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   void setString(QTextStream* theWrappedObject, QString*  string, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite);
   void skipWhiteSpace(QTextStream* theWrappedObject);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
};





class PythonQtShell_QThread : public QThread
{
public:
    PythonQtShell_QThread(QObject*  parent = nullptr):QThread(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QThread() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void run() override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QThread : public QThread
{ public:
inline int  promoted_exec() { return this->exec(); }
inline void promoted_run() { this->run(); }
static inline void promoted_setTerminationEnabled(bool  enabled = true) { setTerminationEnabled(enabled); }
inline bool  py_q_event(QEvent*  event) { return QThread::event(event); }
inline void py_q_run() { QThread::run(); }
};

class PythonQtWrapper_QThread : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Priority )
enum Priority{
  IdlePriority = QThread::IdlePriority,   LowestPriority = QThread::LowestPriority,   LowPriority = QThread::LowPriority,   NormalPriority = QThread::NormalPriority,   HighPriority = QThread::HighPriority,   HighestPriority = QThread::HighestPriority,   TimeCriticalPriority = QThread::TimeCriticalPriority,   InheritPriority = QThread::InheritPriority};
public slots:
QThread* new_QThread(QObject*  parent = nullptr);
void delete_QThread(QThread* obj) { delete obj; }
   QThread*  static_QThread_currentThread();
   Qt::HANDLE  static_QThread_currentThreadId();
   bool  py_q_event(QThread* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QThread*)theWrappedObject)->py_q_event(event));}
   QAbstractEventDispatcher*  eventDispatcher(QThread* theWrappedObject) const;
   int  exec(QThread* theWrappedObject);
   int  static_QThread_idealThreadCount();
   bool  isFinished(QThread* theWrappedObject) const;
   bool  isInterruptionRequested(QThread* theWrappedObject) const;
   bool  isRunning(QThread* theWrappedObject) const;
   int  loopLevel(QThread* theWrappedObject) const;
   void static_QThread_msleep(unsigned long  arg__1);
   QThread::Priority  priority(QThread* theWrappedObject) const;
   void requestInterruption(QThread* theWrappedObject);
   void run(QThread* theWrappedObject);
   void py_q_run(QThread* theWrappedObject){  (((PythonQtPublicPromoter_QThread*)theWrappedObject)->py_q_run());}
   void setEventDispatcher(QThread* theWrappedObject, QAbstractEventDispatcher*  eventDispatcher);
   void setPriority(QThread* theWrappedObject, QThread::Priority  priority);
   void setStackSize(QThread* theWrappedObject, uint  stackSize);
   void static_QThread_setTerminationEnabled(bool  enabled = true);
   void static_QThread_sleep(unsigned long  arg__1);
   uint  stackSize(QThread* theWrappedObject) const;
   void static_QThread_usleep(unsigned long  arg__1);
   bool  wait(QThread* theWrappedObject, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QThread* theWrappedObject, unsigned long  time);
   void static_QThread_yieldCurrentThread();
};





class PythonQtShell_QThreadPool : public QThreadPool
{
public:
    PythonQtShell_QThreadPool(QObject*  parent = nullptr):QThreadPool(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QThreadPool() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QThreadPool : public QObject
{ Q_OBJECT
public:
public slots:
QThreadPool* new_QThreadPool(QObject*  parent = nullptr);
void delete_QThreadPool(QThreadPool* obj) { delete obj; }
   int  activeThreadCount(QThreadPool* theWrappedObject) const;
   void clear(QThreadPool* theWrappedObject);
   bool  contains(QThreadPool* theWrappedObject, const QThread*  thread) const;
   int  expiryTimeout(QThreadPool* theWrappedObject) const;
   QThreadPool*  static_QThreadPool_globalInstance();
   int  maxThreadCount(QThreadPool* theWrappedObject) const;
   void releaseThread(QThreadPool* theWrappedObject);
   void reserveThread(QThreadPool* theWrappedObject);
   void setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout);
   void setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount);
   void setStackSize(QThreadPool* theWrappedObject, uint  stackSize);
   void setThreadPriority(QThreadPool* theWrappedObject, QThread::Priority  priority);
   uint  stackSize(QThreadPool* theWrappedObject) const;
   void start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority = 0);
   void startOnReservedThread(QThreadPool* theWrappedObject, QRunnable*  runnable);
   QThread::Priority  threadPriority(QThreadPool* theWrappedObject) const;
   bool  tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable);
   bool  tryTake(QThreadPool* theWrappedObject, QRunnable*  runnable);
   bool  waitForDone(QThreadPool* theWrappedObject, int  msecs = -1);
};





class PythonQtShell_QTimeLine : public QTimeLine
{
public:
    PythonQtShell_QTimeLine(int  duration = 1000, QObject*  parent = nullptr):QTimeLine(duration, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTimeLine() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
qreal  valueForTime(int  msec) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimeLine : public QTimeLine
{ public:
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTimeLine::timerEvent(event); }
inline qreal  py_q_valueForTime(int  msec) const { return QTimeLine::valueForTime(msec); }
};

class PythonQtWrapper_QTimeLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction State )
enum Direction{
  Forward = QTimeLine::Forward,   Backward = QTimeLine::Backward};
enum State{
  NotRunning = QTimeLine::NotRunning,   Paused = QTimeLine::Paused,   Running = QTimeLine::Running};
public slots:
QTimeLine* new_QTimeLine(int  duration = 1000, QObject*  parent = nullptr);
void delete_QTimeLine(QTimeLine* obj) { delete obj; }
   int  currentFrame(QTimeLine* theWrappedObject) const;
   int  currentTime(QTimeLine* theWrappedObject) const;
   qreal  currentValue(QTimeLine* theWrappedObject) const;
   QTimeLine::Direction  direction(QTimeLine* theWrappedObject) const;
   int  duration(QTimeLine* theWrappedObject) const;
   QEasingCurve  easingCurve(QTimeLine* theWrappedObject) const;
   int  endFrame(QTimeLine* theWrappedObject) const;
   int  frameForTime(QTimeLine* theWrappedObject, int  msec) const;
   int  loopCount(QTimeLine* theWrappedObject) const;
   void setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction);
   void setDuration(QTimeLine* theWrappedObject, int  duration);
   void setEasingCurve(QTimeLine* theWrappedObject, const QEasingCurve&  curve);
   void setEndFrame(QTimeLine* theWrappedObject, int  frame);
   void setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame);
   void setLoopCount(QTimeLine* theWrappedObject, int  count);
   void setStartFrame(QTimeLine* theWrappedObject, int  frame);
   void setUpdateInterval(QTimeLine* theWrappedObject, int  interval);
   int  startFrame(QTimeLine* theWrappedObject) const;
   QTimeLine::State  state(QTimeLine* theWrappedObject) const;
   void py_q_timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->py_q_timerEvent(event));}
   int  updateInterval(QTimeLine* theWrappedObject) const;
   qreal  valueForTime(QTimeLine* theWrappedObject, int  msec) const;
   qreal  py_q_valueForTime(QTimeLine* theWrappedObject, int  msec) const{  return (((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->py_q_valueForTime(msec));}
};





class PythonQtWrapper_QTimeZone : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Initialization NameType TimeType )
enum Initialization{
  LocalTime = QTimeZone::LocalTime,   UTC = QTimeZone::UTC};
enum NameType{
  DefaultName = QTimeZone::DefaultName,   LongName = QTimeZone::LongName,   ShortName = QTimeZone::ShortName,   OffsetName = QTimeZone::OffsetName};
enum TimeType{
  StandardTime = QTimeZone::StandardTime,   DaylightTime = QTimeZone::DaylightTime,   GenericTime = QTimeZone::GenericTime};
public slots:
QTimeZone* new_QTimeZone();
QTimeZone* new_QTimeZone(QTimeZone::Initialization  spec);
QTimeZone* new_QTimeZone(const QByteArray&  ianaId);
QTimeZone* new_QTimeZone(const QByteArray&  zoneId, int  offsetSeconds, const QString&  name, const QString&  abbreviation, QLocale::Country  territory = QLocale::AnyTerritory, const QString&  comment = QString());
QTimeZone* new_QTimeZone(const QTimeZone&  other);
QTimeZone* new_QTimeZone(int  offsetSeconds);
void delete_QTimeZone(QTimeZone* obj) { delete obj; }
   QString  abbreviation(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QTimeZone  asBackendZone(QTimeZone* theWrappedObject) const;
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds();
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(QLocale::Country  territory);
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(int  offsetSeconds);
   QString  comment(QTimeZone* theWrappedObject) const;
   QLocale::Country  country(QTimeZone* theWrappedObject) const;
   int  daylightTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QString  displayName(QTimeZone* theWrappedObject, QTimeZone::TimeType  timeType, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   QString  displayName(QTimeZone* theWrappedObject, const QDateTime&  atDateTime, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   int  fixedSecondsAheadOfUtc(QTimeZone* theWrappedObject) const;
   QTimeZone  static_QTimeZone_fromSecondsAheadOfUtc(int  offset);
   bool  hasDaylightTime(QTimeZone* theWrappedObject) const;
   bool  hasTransitions(QTimeZone* theWrappedObject) const;
   QByteArray  static_QTimeZone_ianaIdToWindowsId(const QByteArray&  ianaId);
   QByteArray  id(QTimeZone* theWrappedObject) const;
   bool  isDaylightTime(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   bool  static_QTimeZone_isTimeZoneIdAvailable(const QByteArray&  ianaId);
   bool  isUtcOrFixedOffset(QTimeZone* theWrappedObject) const;
   bool  static_QTimeZone_isUtcOrFixedOffset(Qt::TimeSpec  spec);
   bool  isValid(QTimeZone* theWrappedObject) const;
   int  offsetFromUtc(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   bool  __ne__(QTimeZone* theWrappedObject, const QTimeZone&  other) const;
   void writeTo(QTimeZone* theWrappedObject, QDataStream&  ds);
   QTimeZone*  operator_assign(QTimeZone* theWrappedObject, const QTimeZone&  other);
   bool  __eq__(QTimeZone* theWrappedObject, const QTimeZone&  other) const;
   void readFrom(QTimeZone* theWrappedObject, QDataStream&  ds);
   int  standardTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   void swap(QTimeZone* theWrappedObject, QTimeZone&  other);
   QTimeZone  static_QTimeZone_systemTimeZone();
   QByteArray  static_QTimeZone_systemTimeZoneId();
   QLocale::Country  territory(QTimeZone* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QTimeZone* theWrappedObject) const;
   QTimeZone  static_QTimeZone_utc();
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId);
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId, QLocale::Country  territory);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId, QLocale::Country  territory);
    QString py_toString(QTimeZone*);
    bool __nonzero__(QTimeZone* obj) { return obj->isValid(); }
};





class PythonQtShell_QTimer : public QTimer
{
public:
    PythonQtShell_QTimer(QObject*  parent = nullptr):QTimer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTimer() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimer : public QTimer
{ public:
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QTimer::timerEvent(arg__1); }
};

class PythonQtWrapper_QTimer : public QObject
{ Q_OBJECT
public:
public slots:
QTimer* new_QTimer(QObject*  parent = nullptr);
void delete_QTimer(QTimer* obj) { delete obj; }
   int  interval(QTimer* theWrappedObject) const;
   bool  isActive(QTimer* theWrappedObject) const;
   bool  isSingleShot(QTimer* theWrappedObject) const;
   int  remainingTime(QTimer* theWrappedObject) const;
   void setInterval(QTimer* theWrappedObject, int  msec);
   void setSingleShot(QTimer* theWrappedObject, bool  singleShot);
   void setTimerType(QTimer* theWrappedObject, Qt::TimerType  atype);
   void static_QTimer_singleShot(int  msec, Qt::TimerType  timerType, const QObject*  receiver, const char*  member);
   void static_QTimer_singleShot(int  msec, const QObject*  receiver, const char*  member);
   void py_q_timerEvent(QTimer* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QTimer*)theWrappedObject)->py_q_timerEvent(arg__1));}
   int  timerId(QTimer* theWrappedObject) const;
   Qt::TimerType  timerType(QTimer* theWrappedObject) const;
};





class PythonQtShell_QTimerEvent : public QTimerEvent
{
public:
    PythonQtShell_QTimerEvent(const QTimerEvent&  arg__1):QTimerEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QTimerEvent(int  timerId):QTimerEvent(timerId),_wrapper(nullptr) {};

   ~PythonQtShell_QTimerEvent() override;

QTimerEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimerEvent : public QTimerEvent
{ public:
inline QTimerEvent&  promoted_operator_assign(const QTimerEvent&  other) { return this->operator=(other); }
inline QTimerEvent*  py_q_clone() const { return QTimerEvent::clone(); }
};

class PythonQtWrapper_QTimerEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTimerEvent* new_QTimerEvent(const QTimerEvent&  arg__1);
QTimerEvent* new_QTimerEvent(int  timerId);
void delete_QTimerEvent(QTimerEvent* obj) { delete obj; }
   QTimerEvent*  py_q_clone(QTimerEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTimerEvent*)theWrappedObject)->py_q_clone());}
   QTimerEvent*  operator_assign(QTimerEvent* theWrappedObject, const QTimerEvent&  other);
   int  timerId(QTimerEvent* theWrappedObject) const;
};





class PythonQtShell_QTranslator : public QTranslator
{
public:
    PythonQtShell_QTranslator(QObject*  parent = nullptr):QTranslator(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTranslator() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isEmpty() const override;
void timerEvent(QTimerEvent*  event) override;
QString  translate(const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTranslator : public QTranslator
{ public:
inline bool  py_q_isEmpty() const { return QTranslator::isEmpty(); }
inline QString  py_q_translate(const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const { return QTranslator::translate(context, sourceText, disambiguation, n); }
};

class PythonQtWrapper_QTranslator : public QObject
{ Q_OBJECT
public:
public slots:
QTranslator* new_QTranslator(QObject*  parent = nullptr);
void delete_QTranslator(QTranslator* obj) { delete obj; }
   QString  filePath(QTranslator* theWrappedObject) const;
   bool  isEmpty(QTranslator* theWrappedObject) const;
   bool  py_q_isEmpty(QTranslator* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->py_q_isEmpty());}
   QString  language(QTranslator* theWrappedObject) const;
   bool  load(QTranslator* theWrappedObject, const QLocale&  locale, const QString&  filename, const QString&  prefix = QString(), const QString&  directory = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory = QString(), const QString&  search_delimiters = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const uchar*  data, int  len, const QString&  directory = QString());
   QString  translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const;
   QString  py_q_translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const{  return (((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->py_q_translate(context, sourceText, disambiguation, n));}
    bool __nonzero__(QTranslator* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QUrlQuery : public QObject
{ Q_OBJECT
public:
public slots:
QUrlQuery* new_QUrlQuery();
QUrlQuery* new_QUrlQuery(const QString&  queryString);
QUrlQuery* new_QUrlQuery(const QUrl&  url);
QUrlQuery* new_QUrlQuery(const QUrlQuery&  other);
void delete_QUrlQuery(QUrlQuery* obj) { delete obj; }
   void addQueryItem(QUrlQuery* theWrappedObject, const QString&  key, const QString&  value);
   QStringList  allQueryItemValues(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   void clear(QUrlQuery* theWrappedObject);
   bool  hasQueryItem(QUrlQuery* theWrappedObject, const QString&  key) const;
   bool  isEmpty(QUrlQuery* theWrappedObject) const;
   bool  __ne__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const;
   QUrlQuery*  operator_assign(QUrlQuery* theWrappedObject, const QUrlQuery&  other);
   bool  __eq__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const;
   QString  query(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   QString  queryItemValue(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   QList<QPair<QString , QString >  >  queryItems(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   QChar  queryPairDelimiter(QUrlQuery* theWrappedObject) const;
   QChar  queryValueDelimiter(QUrlQuery* theWrappedObject) const;
   void removeAllQueryItems(QUrlQuery* theWrappedObject, const QString&  key);
   void removeQueryItem(QUrlQuery* theWrappedObject, const QString&  key);
   void setQuery(QUrlQuery* theWrappedObject, const QString&  queryString);
   void setQueryDelimiters(QUrlQuery* theWrappedObject, QChar  valueDelimiter, QChar  pairDelimiter);
   void setQueryItems(QUrlQuery* theWrappedObject, const QList<QPair<QString , QString >  >&  query);
   void swap(QUrlQuery* theWrappedObject, QUrlQuery&  other);
   QString  toString(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
    QString py_toString(QUrlQuery*);
    bool __nonzero__(QUrlQuery* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QUuid : public QUuid
{
public:
    PythonQtShell_QUuid():QUuid(),_wrapper(nullptr) {};
    PythonQtShell_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8):QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8),_wrapper(nullptr) {};

   ~PythonQtShell_QUuid();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QUuid : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StringFormat Variant Version )
enum StringFormat{
  WithBraces = QUuid::WithBraces,   WithoutBraces = QUuid::WithoutBraces,   Id128 = QUuid::Id128};
enum Variant{
  VarUnknown = QUuid::VarUnknown,   NCS = QUuid::NCS,   DCE = QUuid::DCE,   Microsoft = QUuid::Microsoft,   Reserved = QUuid::Reserved};
enum Version{
  VerUnknown = QUuid::VerUnknown,   Time = QUuid::Time,   EmbeddedPOSIX = QUuid::EmbeddedPOSIX,   Md5 = QUuid::Md5,   Name = QUuid::Name,   Random = QUuid::Random,   Sha1 = QUuid::Sha1};
public slots:
QUuid* new_QUuid();
QUuid* new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8);
QUuid* new_QUuid(const QUuid& other) {
PythonQtShell_QUuid* a = new PythonQtShell_QUuid();
*((QUuid*)a) = other;
return a; }
void delete_QUuid(QUuid* obj) { delete obj; }
   QUuid  static_QUuid_createUuid();
   QUuid  static_QUuid_createUuidV3(const QUuid&  ns, const QByteArray&  baseData);
   QUuid  static_QUuid_createUuidV3(const QUuid&  ns, const QString&  baseData);
   QUuid  static_QUuid_createUuidV5(const QUuid&  ns, const QByteArray&  baseData);
   QUuid  static_QUuid_createUuidV5(const QUuid&  ns, const QString&  baseData);
   bool  isNull(QUuid* theWrappedObject) const;
   bool  __ne__(QUuid* theWrappedObject, const QUuid&  orig) const;
   bool  __lt__(QUuid* theWrappedObject, const QUuid&  other) const;
   void writeTo(QUuid* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QUuid* theWrappedObject, const QUuid&  rhs);
   bool  __eq__(QUuid* theWrappedObject, const QUuid&  orig) const;
   bool  __gt__(QUuid* theWrappedObject, const QUuid&  other) const;
   bool  __ge__(QUuid* theWrappedObject, const QUuid&  rhs);
   void readFrom(QUuid* theWrappedObject, QDataStream&  arg__1);
   QByteArray  toByteArray(QUuid* theWrappedObject, QUuid::StringFormat  mode = QUuid::WithBraces) const;
   QByteArray  toRfc4122(QUuid* theWrappedObject) const;
   QString  toString(QUuid* theWrappedObject, QUuid::StringFormat  mode = QUuid::WithBraces) const;
   QUuid::Variant  variant(QUuid* theWrappedObject) const;
   QUuid::Version  version(QUuid* theWrappedObject) const;
    QString py_toString(QUuid*);
    bool __nonzero__(QUuid* obj) { return !obj->isNull(); }
void py_set_data1(QUuid* theWrappedObject, uint  data1){ theWrappedObject->data1 = data1; }
uint  py_get_data1(QUuid* theWrappedObject){ return theWrappedObject->data1; }
void py_set_data2(QUuid* theWrappedObject, ushort  data2){ theWrappedObject->data2 = data2; }
ushort  py_get_data2(QUuid* theWrappedObject){ return theWrappedObject->data2; }
void py_set_data3(QUuid* theWrappedObject, ushort  data3){ theWrappedObject->data3 = data3; }
ushort  py_get_data3(QUuid* theWrappedObject){ return theWrappedObject->data3; }
};





class PythonQtShell_QVariantAnimation : public QVariantAnimation
{
public:
    PythonQtShell_QVariantAnimation(QObject*  parent = nullptr):QVariantAnimation(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVariantAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateCurrentValue(const QVariant&  value) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QVariantAnimation : public QVariantAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline QVariant  promoted_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return this->interpolated(from, to, progress); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline void promoted_updateCurrentValue(const QVariant&  value) { this->updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QVariantAnimation::duration(); }
inline bool  py_q_event(QEvent*  event) { return QVariantAnimation::event(event); }
inline QVariant  py_q_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return QVariantAnimation::interpolated(from, to, progress); }
inline void py_q_updateCurrentTime(int  arg__1) { QVariantAnimation::updateCurrentTime(arg__1); }
inline void py_q_updateCurrentValue(const QVariant&  value) { QVariantAnimation::updateCurrentValue(value); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QVariantAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QVariantAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QVariantAnimation* new_QVariantAnimation(QObject*  parent = nullptr);
void delete_QVariantAnimation(QVariantAnimation* obj) { delete obj; }
   QVariant  currentValue(QVariantAnimation* theWrappedObject) const;
   int  py_q_duration(QVariantAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_duration());}
   QEasingCurve  easingCurve(QVariantAnimation* theWrappedObject) const;
   QVariant  endValue(QVariantAnimation* theWrappedObject) const;
   bool  py_q_event(QVariantAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_event(event));}
   QVariant  interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const;
   QVariant  py_q_interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_interpolated(from, to, progress));}
   QVariant  keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QVariant >  >  keyValues(QVariantAnimation* theWrappedObject) const;
   void setDuration(QVariantAnimation* theWrappedObject, int  msecs);
   void setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing);
   void setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value);
   void setKeyValues(QVariantAnimation* theWrappedObject, const QList<QPair<qreal , QVariant >  >&  values);
   void setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   QVariant  startValue(QVariantAnimation* theWrappedObject) const;
   void py_q_updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
   void updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void py_q_updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentValue(value));}
   void py_q_updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtWrapper_QWaitCondition : public QObject
{ Q_OBJECT
public:
public slots:
QWaitCondition* new_QWaitCondition();
void delete_QWaitCondition(QWaitCondition* obj) { delete obj; }
   void notify_all(QWaitCondition* theWrappedObject);
   void notify_one(QWaitCondition* theWrappedObject);
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time);
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time);
   void wakeAll(QWaitCondition* theWrappedObject);
   void wakeOne(QWaitCondition* theWrappedObject);
};





class PythonQtWrapper_QWriteLocker : public QObject
{ Q_OBJECT
public:
public slots:
QWriteLocker* new_QWriteLocker(QReadWriteLock*  readWriteLock);
void delete_QWriteLocker(QWriteLocker* obj) { delete obj; }
   QReadWriteLock*  readWriteLock(QWriteLocker* theWrappedObject) const;
   void relock(QWriteLocker* theWrappedObject);
   void unlock(QWriteLocker* theWrappedObject);

    void __enter__(QWriteLocker* self) {}
    void __exit__(QWriteLocker* self, PyObject* type, PyObject* value, PyObject* traceback) { self->unlock(); }
    
};





class PythonQtShell_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{
public:
    PythonQtShell_QXmlStreamEntityResolver():QXmlStreamEntityResolver(),_wrapper(nullptr) {};

   ~PythonQtShell_QXmlStreamEntityResolver() override;

QString  resolveEntity(const QString&  publicId, const QString&  systemId) override;
QString  resolveUndeclaredEntity(const QString&  name) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{ public:
inline QString  py_q_resolveEntity(const QString&  publicId, const QString&  systemId) { return QXmlStreamEntityResolver::resolveEntity(publicId, systemId); }
inline QString  py_q_resolveUndeclaredEntity(const QString&  name) { return QXmlStreamEntityResolver::resolveUndeclaredEntity(name); }
};

class PythonQtWrapper_QXmlStreamEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityResolver* new_QXmlStreamEntityResolver();
void delete_QXmlStreamEntityResolver(QXmlStreamEntityResolver* obj) { delete obj; }
   QString  resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId);
   QString  py_q_resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->py_q_resolveEntity(publicId, systemId));}
   QString  resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name);
   QString  py_q_resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->py_q_resolveUndeclaredEntity(name));}
};


