#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qfileinfo.h>
#include <qfileselector.h>
#include <qfilesystemwatcher.h>
#include <qidentityproxymodel.h>
#include <qiodevice.h>
#include <qiodevicebase.h>
#include <qitemselectionmodel.h>
#include <qjsonarray.h>
#include <qjsondocument.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>
#include <qlibrary.h>
#include <qlibraryinfo.h>
#include <qlist.h>
#include <qlockfile.h>
#include <qlogging.h>
#include <qloggingcategory.h>
#include <qmargins.h>
#include <qmessageauthenticationcode.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedata.h>
#include <qmimedatabase.h>
#include <qmimetype.h>
#include <qmutex.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qthread.h>
#include <qurl.h>



class PythonQtShell_QFileSelector : public QFileSelector
{
public:
    PythonQtShell_QFileSelector(QObject*  parent = nullptr):QFileSelector(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFileSelector() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QFileSelector : public QObject
{ Q_OBJECT
public:
public slots:
QFileSelector* new_QFileSelector(QObject*  parent = nullptr);
void delete_QFileSelector(QFileSelector* obj) { delete obj; }
   QStringList  allSelectors(QFileSelector* theWrappedObject) const;
   QStringList  extraSelectors(QFileSelector* theWrappedObject) const;
   QString  select(QFileSelector* theWrappedObject, const QString&  filePath) const;
   QUrl  select(QFileSelector* theWrappedObject, const QUrl&  filePath) const;
   void setExtraSelectors(QFileSelector* theWrappedObject, const QStringList&  list);
};





class PythonQtShell_QFileSystemWatcher : public QFileSystemWatcher
{
public:
    PythonQtShell_QFileSystemWatcher(QObject*  parent = nullptr):QFileSystemWatcher(parent),_wrapper(nullptr) {};
    PythonQtShell_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = nullptr):QFileSystemWatcher(paths, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFileSystemWatcher() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QFileSystemWatcher : public QObject
{ Q_OBJECT
public:
public slots:
QFileSystemWatcher* new_QFileSystemWatcher(QObject*  parent = nullptr);
QFileSystemWatcher* new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = nullptr);
void delete_QFileSystemWatcher(QFileSystemWatcher* obj) { delete obj; }
   bool  addPath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   QStringList  addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
   QStringList  directories(QFileSystemWatcher* theWrappedObject) const;
   QStringList  files(QFileSystemWatcher* theWrappedObject) const;
   bool  removePath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   QStringList  removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
};





class PythonQtShell_QIODevice : public QIODevice
{
public:
    PythonQtShell_QIODevice():QIODevice(),_wrapper(nullptr) {};
    PythonQtShell_QIODevice(QObject*  parent):QIODevice(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QIODevice() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  mode) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  seek(qint64  pos) override;
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

class PythonQtPublicPromoter_QIODevice : public QIODevice
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline void promoted_setErrorString(const QString&  errorString) { this->setErrorString(errorString); }
inline void promoted_setOpenMode(QIODeviceBase::OpenMode  openMode) { this->setOpenMode(openMode); }
inline qint64  promoted_skipData(qint64  maxSize) { return this->skipData(maxSize); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QIODevice::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QIODevice::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QIODevice::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QIODevice::canReadLine(); }
inline void py_q_close() { QIODevice::close(); }
inline bool  py_q_isSequential() const { return QIODevice::isSequential(); }
inline bool  py_q_open(QIODeviceBase::OpenMode  mode) { return QIODevice::open(mode); }
inline qint64  py_q_pos() const { return QIODevice::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QIODevice::readLineData(data, maxlen); }
inline bool  py_q_reset() { return QIODevice::reset(); }
inline bool  py_q_seek(qint64  pos) { return QIODevice::seek(pos); }
inline qint64  py_q_size() const { return QIODevice::size(); }
inline qint64  py_q_skipData(qint64  maxSize) { return QIODevice::skipData(maxSize); }
inline bool  py_q_waitForBytesWritten(int  msecs) { return QIODevice::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs) { return QIODevice::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
};

class PythonQtWrapper_QIODevice : public QObject
{ Q_OBJECT
public:
public slots:
QIODevice* new_QIODevice();
QIODevice* new_QIODevice(QObject*  parent);
void delete_QIODevice(QIODevice* obj) { delete obj; }
   bool  atEnd(QIODevice* theWrappedObject) const;
   bool  py_q_atEnd(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_atEnd());}
   qint64  bytesAvailable(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesAvailable(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  bytesToWrite(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesToWrite(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesToWrite());}
   bool  canReadLine(QIODevice* theWrappedObject) const;
   bool  py_q_canReadLine(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_canReadLine());}
   void close(QIODevice* theWrappedObject);
   void py_q_close(QIODevice* theWrappedObject){  (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_close());}
   void commitTransaction(QIODevice* theWrappedObject);
   int  currentReadChannel(QIODevice* theWrappedObject) const;
   int  currentWriteChannel(QIODevice* theWrappedObject) const;
   QString  errorString(QIODevice* theWrappedObject) const;
   bool  getChar(QIODevice* theWrappedObject, char*  c);
   bool  isOpen(QIODevice* theWrappedObject) const;
   bool  isReadable(QIODevice* theWrappedObject) const;
   bool  isSequential(QIODevice* theWrappedObject) const;
   bool  py_q_isSequential(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_isSequential());}
   bool  isTextModeEnabled(QIODevice* theWrappedObject) const;
   bool  isTransactionStarted(QIODevice* theWrappedObject) const;
   bool  isWritable(QIODevice* theWrappedObject) const;
   bool  open(QIODevice* theWrappedObject, QIODeviceBase::OpenMode  mode);
   bool  py_q_open(QIODevice* theWrappedObject, QIODeviceBase::OpenMode  mode){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_open(mode));}
   QIODeviceBase::OpenMode  openMode(QIODevice* theWrappedObject) const;
   QByteArray  peek(QIODevice* theWrappedObject, qint64  maxlen);
   qint64  pos(QIODevice* theWrappedObject) const;
   qint64  py_q_pos(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_pos());}
   bool  putChar(QIODevice* theWrappedObject, char  c);
   QByteArray  read(QIODevice* theWrappedObject, qint64  maxlen);
   QByteArray  readAll(QIODevice* theWrappedObject);
   int  readChannelCount(QIODevice* theWrappedObject) const;
   qint64  readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readData(data, maxlen));}
   QByteArray  readLine(QIODevice* theWrappedObject, qint64  maxlen = 0);
   qint64  readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   bool  reset(QIODevice* theWrappedObject);
   bool  py_q_reset(QIODevice* theWrappedObject){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_reset());}
   void rollbackTransaction(QIODevice* theWrappedObject);
   bool  seek(QIODevice* theWrappedObject, qint64  pos);
   bool  py_q_seek(QIODevice* theWrappedObject, qint64  pos){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_seek(pos));}
   void setCurrentReadChannel(QIODevice* theWrappedObject, int  channel);
   void setCurrentWriteChannel(QIODevice* theWrappedObject, int  channel);
   void setErrorString(QIODevice* theWrappedObject, const QString&  errorString);
   void setOpenMode(QIODevice* theWrappedObject, QIODeviceBase::OpenMode  openMode);
   void setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled);
   qint64  size(QIODevice* theWrappedObject) const;
   qint64  py_q_size(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_size());}
   qint64  skip(QIODevice* theWrappedObject, qint64  maxSize);
   qint64  skipData(QIODevice* theWrappedObject, qint64  maxSize);
   qint64  py_q_skipData(QIODevice* theWrappedObject, qint64  maxSize){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_skipData(maxSize));}
   void startTransaction(QIODevice* theWrappedObject);
   void ungetChar(QIODevice* theWrappedObject, char  c);
   bool  waitForBytesWritten(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForBytesWritten(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForReadyRead(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForReadyRead(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  write(QIODevice* theWrappedObject, const QByteArray&  data);
   qint64  write(QIODevice* theWrappedObject, const char*  data);
   int  writeChannelCount(QIODevice* theWrappedObject) const;
   qint64  writeData(QIODevice* theWrappedObject, const char*  data, qint64  len);
   qint64  py_q_writeData(QIODevice* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtShell_QIODeviceBase : public QIODeviceBase
{
public:
    PythonQtShell_QIODeviceBase():QIODeviceBase(),_wrapper(nullptr) {};

   ~PythonQtShell_QIODeviceBase();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QIODeviceBase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenModeFlag )
Q_FLAGS(OpenMode )
enum OpenModeFlag{
  NotOpen = QIODeviceBase::NotOpen,   ReadOnly = QIODeviceBase::ReadOnly,   WriteOnly = QIODeviceBase::WriteOnly,   ReadWrite = QIODeviceBase::ReadWrite,   Append = QIODeviceBase::Append,   Truncate = QIODeviceBase::Truncate,   Text = QIODeviceBase::Text,   Unbuffered = QIODeviceBase::Unbuffered,   NewOnly = QIODeviceBase::NewOnly,   ExistingOnly = QIODeviceBase::ExistingOnly};
Q_DECLARE_FLAGS(OpenMode, OpenModeFlag)
public slots:
QIODeviceBase* new_QIODeviceBase();
};





class PythonQtShell_QIdentityProxyModel : public QIdentityProxyModel
{
public:
    PythonQtShell_QIdentityProxyModel(QObject*  parent = nullptr):QIdentityProxyModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QIdentityProxyModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
bool  clearItemData(const QModelIndex&  index) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const override;
QItemSelection  mapSelectionFromSource(const QItemSelection&  selection) const override;
QItemSelection  mapSelectionToSource(const QItemSelection&  selection) const override;
QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
QModelIndex  parent(const QModelIndex&  child) const override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void resetInternalData() override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
void setSourceModel(QAbstractItemModel*  sourceModel) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIdentityProxyModel : public QIdentityProxyModel
{ public:
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::columnCount(parent); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QIdentityProxyModel::dropMimeData(data, action, row, column, parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QIdentityProxyModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertRows(row, count, parent); }
inline QModelIndex  py_q_mapFromSource(const QModelIndex&  sourceIndex) const { return QIdentityProxyModel::mapFromSource(sourceIndex); }
inline QItemSelection  py_q_mapSelectionFromSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionFromSource(selection); }
inline QItemSelection  py_q_mapSelectionToSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionToSource(selection); }
inline QModelIndex  py_q_mapToSource(const QModelIndex&  proxyIndex) const { return QIdentityProxyModel::mapToSource(proxyIndex); }
inline QList<QModelIndex >  py_q_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QIdentityProxyModel::match(start, role, value, hits, flags); }
inline bool  py_q_moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild); }
inline bool  py_q_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QIdentityProxyModel::parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::rowCount(parent); }
inline void py_q_setSourceModel(QAbstractItemModel*  sourceModel) { QIdentityProxyModel::setSourceModel(sourceModel); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QIdentityProxyModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QIdentityProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QIdentityProxyModel* new_QIdentityProxyModel(QObject*  parent = nullptr);
void delete_QIdentityProxyModel(QIdentityProxyModel* obj) { delete obj; }
   int  py_q_columnCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_columnCount(parent));}
   bool  py_q_dropMimeData(QIdentityProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   QVariant  py_q_headerData(QIdentityProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_index(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  py_q_insertColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  py_q_insertRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QModelIndex  py_q_mapFromSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapFromSource(sourceIndex));}
   QItemSelection  py_q_mapSelectionFromSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapSelectionFromSource(selection));}
   QItemSelection  py_q_mapSelectionToSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapSelectionToSource(selection));}
   QModelIndex  py_q_mapToSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapToSource(proxyIndex));}
   QList<QModelIndex >  py_q_match(QIdentityProxyModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_match(start, role, value, hits, flags));}
   bool  py_q_moveColumns(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild));}
   bool  py_q_moveRows(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));}
   QModelIndex  py_q_parent(QIdentityProxyModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_parent(child));}
   bool  py_q_removeColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_rowCount(parent));}
   void py_q_setSourceModel(QIdentityProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel){  (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_setSourceModel(sourceModel));}
   QModelIndex  py_q_sibling(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtWrapper_QJsonArray : public QObject
{ Q_OBJECT
public:
public slots:
QJsonArray* new_QJsonArray();
QJsonArray* new_QJsonArray(const QJsonArray&  other);
void delete_QJsonArray(QJsonArray* obj) { delete obj; }
   void append(QJsonArray* theWrappedObject, const QJsonValue&  value);
   QJsonValue  at(QJsonArray* theWrappedObject, qsizetype  i) const;
   bool  contains(QJsonArray* theWrappedObject, const QJsonValue&  element) const;
   qsizetype  count(QJsonArray* theWrappedObject) const;
   bool  empty(QJsonArray* theWrappedObject) const;
   QJsonValue  first(QJsonArray* theWrappedObject) const;
   QJsonArray  static_QJsonArray_fromStringList(const QStringList&  list);
   QJsonArray  static_QJsonArray_fromVariantList(const QList<QVariant >&  list);
   bool  isEmpty(QJsonArray* theWrappedObject) const;
   QJsonValue  last(QJsonArray* theWrappedObject) const;
   bool  __ne__(QJsonArray* theWrappedObject, const QJsonArray&  other) const;
   QJsonArray  __add__(QJsonArray* theWrappedObject, const QJsonValue&  v) const;
   QJsonArray*  __iadd__(QJsonArray* theWrappedObject, const QJsonValue&  v);
   void writeTo(QJsonArray* theWrappedObject, QDataStream&  arg__1);
   QJsonArray*  __lshift__(QJsonArray* theWrappedObject, const QJsonValue&  v);
   QJsonArray*  operator_assign(QJsonArray* theWrappedObject, const QJsonArray&  other);
   bool  __eq__(QJsonArray* theWrappedObject, const QJsonArray&  other) const;
   void readFrom(QJsonArray* theWrappedObject, QDataStream&  arg__1);
   QJsonValue  operator_subscript(QJsonArray* theWrappedObject, qsizetype  i) const;
   void pop_back(QJsonArray* theWrappedObject);
   void pop_front(QJsonArray* theWrappedObject);
   void prepend(QJsonArray* theWrappedObject, const QJsonValue&  value);
   void push_back(QJsonArray* theWrappedObject, const QJsonValue&  t);
   void push_front(QJsonArray* theWrappedObject, const QJsonValue&  t);
   void removeAt(QJsonArray* theWrappedObject, qsizetype  i);
   void removeFirst(QJsonArray* theWrappedObject);
   void removeLast(QJsonArray* theWrappedObject);
   void replace(QJsonArray* theWrappedObject, qsizetype  i, const QJsonValue&  value);
   qsizetype  size(QJsonArray* theWrappedObject) const;
   void swap(QJsonArray* theWrappedObject, QJsonArray&  other);
   QJsonValue  takeAt(QJsonArray* theWrappedObject, qsizetype  i);
   QList<QVariant >  toVariantList(QJsonArray* theWrappedObject) const;
    QString py_toString(QJsonArray*);
    bool __nonzero__(QJsonArray* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QJsonDocument : public QJsonDocument
{
public:
    PythonQtShell_QJsonDocument():QJsonDocument(),_wrapper(nullptr) {};
    PythonQtShell_QJsonDocument(const QJsonArray&  array):QJsonDocument(array),_wrapper(nullptr) {};
    PythonQtShell_QJsonDocument(const QJsonDocument&  other):QJsonDocument(other),_wrapper(nullptr) {};
    PythonQtShell_QJsonDocument(const QJsonObject&  object):QJsonDocument(object),_wrapper(nullptr) {};

   ~PythonQtShell_QJsonDocument();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QJsonDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(JsonFormat )
enum JsonFormat{
  Indented = QJsonDocument::Indented,   Compact = QJsonDocument::Compact};
public slots:
QJsonDocument* new_QJsonDocument();
QJsonDocument* new_QJsonDocument(const QJsonArray&  array);
QJsonDocument* new_QJsonDocument(const QJsonDocument&  other);
QJsonDocument* new_QJsonDocument(const QJsonObject&  object);
void delete_QJsonDocument(QJsonDocument* obj) { delete obj; }
   QJsonArray  array(QJsonDocument* theWrappedObject) const;
   QJsonDocument  static_QJsonDocument_fromJson(const QByteArray&  json, QJsonParseError*  error = nullptr);
   QJsonDocument  static_QJsonDocument_fromVariant(const QVariant&  variant);
   bool  isArray(QJsonDocument* theWrappedObject) const;
   bool  isEmpty(QJsonDocument* theWrappedObject) const;
   bool  isNull(QJsonDocument* theWrappedObject) const;
   bool  isObject(QJsonDocument* theWrappedObject) const;
   QJsonObject  object(QJsonDocument* theWrappedObject) const;
   bool  __ne__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const;
   void writeTo(QJsonDocument* theWrappedObject, QDataStream&  arg__1);
   QJsonDocument*  operator_assign(QJsonDocument* theWrappedObject, const QJsonDocument&  other);
   bool  __eq__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const;
   void readFrom(QJsonDocument* theWrappedObject, QDataStream&  arg__1);
   const QJsonValue  operator_subscript(QJsonDocument* theWrappedObject, const QString&  key) const;
   const QJsonValue  operator_subscript(QJsonDocument* theWrappedObject, qsizetype  i) const;
   void setArray(QJsonDocument* theWrappedObject, const QJsonArray&  array);
   void setObject(QJsonDocument* theWrappedObject, const QJsonObject&  object);
   void swap(QJsonDocument* theWrappedObject, QJsonDocument&  other);
   QByteArray  toJson(QJsonDocument* theWrappedObject, QJsonDocument::JsonFormat  format = QJsonDocument::Indented) const;
   QVariant  toVariant(QJsonDocument* theWrappedObject) const;
    QString py_toString(QJsonDocument*);
    bool __nonzero__(QJsonDocument* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QJsonObject : public QObject
{ Q_OBJECT
public:
public slots:
QJsonObject* new_QJsonObject();
QJsonObject* new_QJsonObject(const QJsonObject&  other);
void delete_QJsonObject(QJsonObject* obj) { delete obj; }
   bool  contains(QJsonObject* theWrappedObject, const QString&  key) const;
   qsizetype  count(QJsonObject* theWrappedObject) const;
   bool  empty(QJsonObject* theWrappedObject) const;
   QJsonObject  static_QJsonObject_fromVariantHash(const QHash<QString , QVariant >&  map);
   QJsonObject  static_QJsonObject_fromVariantMap(const QMap<QString , QVariant >&  map);
   bool  isEmpty(QJsonObject* theWrappedObject) const;
   QStringList  keys(QJsonObject* theWrappedObject) const;
   qsizetype  length(QJsonObject* theWrappedObject) const;
   bool  __ne__(QJsonObject* theWrappedObject, const QJsonObject&  other) const;
   void writeTo(QJsonObject* theWrappedObject, QDataStream&  arg__1);
   QJsonObject*  operator_assign(QJsonObject* theWrappedObject, const QJsonObject&  other);
   bool  __eq__(QJsonObject* theWrappedObject, const QJsonObject&  other) const;
   void readFrom(QJsonObject* theWrappedObject, QDataStream&  arg__1);
   QJsonValue  operator_subscript(QJsonObject* theWrappedObject, const QString&  key) const;
   void remove(QJsonObject* theWrappedObject, const QString&  key);
   qsizetype  size(QJsonObject* theWrappedObject) const;
   void swap(QJsonObject* theWrappedObject, QJsonObject&  other);
   QJsonValue  take(QJsonObject* theWrappedObject, const QString&  key);
   QHash<QString , QVariant >  toVariantHash(QJsonObject* theWrappedObject) const;
   QMap<QString , QVariant >  toVariantMap(QJsonObject* theWrappedObject) const;
   QJsonValue  value(QJsonObject* theWrappedObject, const QString&  key) const;
    QString py_toString(QJsonObject*);
    bool __nonzero__(QJsonObject* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QJsonParseError : public QJsonParseError
{
public:
    PythonQtShell_QJsonParseError():QJsonParseError(),_wrapper(nullptr) {};

   ~PythonQtShell_QJsonParseError();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QJsonParseError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParseError )
enum ParseError{
  NoError = QJsonParseError::NoError,   UnterminatedObject = QJsonParseError::UnterminatedObject,   MissingNameSeparator = QJsonParseError::MissingNameSeparator,   UnterminatedArray = QJsonParseError::UnterminatedArray,   MissingValueSeparator = QJsonParseError::MissingValueSeparator,   IllegalValue = QJsonParseError::IllegalValue,   TerminationByNumber = QJsonParseError::TerminationByNumber,   IllegalNumber = QJsonParseError::IllegalNumber,   IllegalEscapeSequence = QJsonParseError::IllegalEscapeSequence,   IllegalUTF8String = QJsonParseError::IllegalUTF8String,   UnterminatedString = QJsonParseError::UnterminatedString,   MissingObject = QJsonParseError::MissingObject,   DeepNesting = QJsonParseError::DeepNesting,   DocumentTooLarge = QJsonParseError::DocumentTooLarge,   GarbageAtEnd = QJsonParseError::GarbageAtEnd};
public slots:
QJsonParseError* new_QJsonParseError();
void delete_QJsonParseError(QJsonParseError* obj) { delete obj; }
   QString  errorString(QJsonParseError* theWrappedObject) const;
void py_set_error(QJsonParseError* theWrappedObject, QJsonParseError::ParseError  error){ theWrappedObject->error = error; }
QJsonParseError::ParseError  py_get_error(QJsonParseError* theWrappedObject){ return theWrappedObject->error; }
void py_set_offset(QJsonParseError* theWrappedObject, int  offset){ theWrappedObject->offset = offset; }
int  py_get_offset(QJsonParseError* theWrappedObject){ return theWrappedObject->offset; }
};





class PythonQtWrapper_QJsonValue : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Null = QJsonValue::Null,   Bool = QJsonValue::Bool,   Double = QJsonValue::Double,   String = QJsonValue::String,   Array = QJsonValue::Array,   Object = QJsonValue::Object,   Undefined = QJsonValue::Undefined};
public slots:
QJsonValue* new_QJsonValue(QJsonValue::Type  arg__1 = QJsonValue::Null);
QJsonValue* new_QJsonValue(bool  b);
QJsonValue* new_QJsonValue(const QJsonArray&  a);
QJsonValue* new_QJsonValue(const QJsonObject&  o);
QJsonValue* new_QJsonValue(const QJsonValue&  other);
QJsonValue* new_QJsonValue(const QString&  s);
QJsonValue* new_QJsonValue(const char*  s);
QJsonValue* new_QJsonValue(double  n);
QJsonValue* new_QJsonValue(int  n);
QJsonValue* new_QJsonValue(qint64  v);
void delete_QJsonValue(QJsonValue* obj) { delete obj; }
   QJsonValue  static_QJsonValue_fromVariant(const QVariant&  variant);
   bool  isArray(QJsonValue* theWrappedObject) const;
   bool  isBool(QJsonValue* theWrappedObject) const;
   bool  isDouble(QJsonValue* theWrappedObject) const;
   bool  isNull(QJsonValue* theWrappedObject) const;
   bool  isObject(QJsonValue* theWrappedObject) const;
   bool  isString(QJsonValue* theWrappedObject) const;
   bool  isUndefined(QJsonValue* theWrappedObject) const;
   bool  __ne__(QJsonValue* theWrappedObject, const QJsonValue&  other) const;
   void writeTo(QJsonValue* theWrappedObject, QDataStream&  arg__1);
   QJsonValue*  operator_assign(QJsonValue* theWrappedObject, const QJsonValue&  other);
   bool  __eq__(QJsonValue* theWrappedObject, const QJsonValue&  other) const;
   void readFrom(QJsonValue* theWrappedObject, QDataStream&  arg__1);
   const QJsonValue  operator_subscript(QJsonValue* theWrappedObject, const QString&  key) const;
   const QJsonValue  operator_subscript(QJsonValue* theWrappedObject, qsizetype  i) const;
   void swap(QJsonValue* theWrappedObject, QJsonValue&  other);
   QJsonArray  toArray(QJsonValue* theWrappedObject) const;
   QJsonArray  toArray(QJsonValue* theWrappedObject, const QJsonArray&  defaultValue) const;
   bool  toBool(QJsonValue* theWrappedObject, bool  defaultValue = false) const;
   double  toDouble(QJsonValue* theWrappedObject, double  defaultValue = 0) const;
   int  toInt(QJsonValue* theWrappedObject, int  defaultValue = 0) const;
   qint64  toInteger(QJsonValue* theWrappedObject, qint64  defaultValue = 0) const;
   QJsonObject  toObject(QJsonValue* theWrappedObject) const;
   QJsonObject  toObject(QJsonValue* theWrappedObject, const QJsonObject&  defaultValue) const;
   QString  toString(QJsonValue* theWrappedObject) const;
   QString  toString(QJsonValue* theWrappedObject, const QString&  defaultValue) const;
   QVariant  toVariant(QJsonValue* theWrappedObject) const;
   QJsonValue::Type  type(QJsonValue* theWrappedObject) const;
    QString py_toString(QJsonValue*);
    bool __nonzero__(QJsonValue* obj) { return !obj->isNull(); }
};





class PythonQtShell_QLibrary : public QLibrary
{
public:
    PythonQtShell_QLibrary(QObject*  parent = nullptr):QLibrary(parent),_wrapper(nullptr) {};
    PythonQtShell_QLibrary(const QString&  fileName, QObject*  parent = nullptr):QLibrary(fileName, parent),_wrapper(nullptr) {};
    PythonQtShell_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent = nullptr):QLibrary(fileName, version, parent),_wrapper(nullptr) {};
    PythonQtShell_QLibrary(const QString&  fileName, int  verNum, QObject*  parent = nullptr):QLibrary(fileName, verNum, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QLibrary() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QLibrary : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LoadHint )
Q_FLAGS(LoadHints )
enum LoadHint{
  ResolveAllSymbolsHint = QLibrary::ResolveAllSymbolsHint,   ExportExternalSymbolsHint = QLibrary::ExportExternalSymbolsHint,   LoadArchiveMemberHint = QLibrary::LoadArchiveMemberHint,   PreventUnloadHint = QLibrary::PreventUnloadHint,   DeepBindHint = QLibrary::DeepBindHint};
Q_DECLARE_FLAGS(LoadHints, LoadHint)
public slots:
QLibrary* new_QLibrary(QObject*  parent = nullptr);
QLibrary* new_QLibrary(const QString&  fileName, QObject*  parent = nullptr);
QLibrary* new_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent = nullptr);
QLibrary* new_QLibrary(const QString&  fileName, int  verNum, QObject*  parent = nullptr);
void delete_QLibrary(QLibrary* obj) { delete obj; }
   QString  errorString(QLibrary* theWrappedObject) const;
   QString  fileName(QLibrary* theWrappedObject) const;
   bool  static_QLibrary_isLibrary(const QString&  fileName);
   bool  isLoaded(QLibrary* theWrappedObject) const;
   bool  load(QLibrary* theWrappedObject);
   QLibrary::LoadHints  loadHints(QLibrary* theWrappedObject) const;
   void setFileName(QLibrary* theWrappedObject, const QString&  fileName);
   void setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, const QString&  version);
   void setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, int  verNum);
   void setLoadHints(QLibrary* theWrappedObject, QLibrary::LoadHints  hints);
   bool  unload(QLibrary* theWrappedObject);
};





class PythonQtWrapper_QLibraryInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LibraryPath )
enum LibraryPath{
  PrefixPath = QLibraryInfo::PrefixPath,   DocumentationPath = QLibraryInfo::DocumentationPath,   HeadersPath = QLibraryInfo::HeadersPath,   LibrariesPath = QLibraryInfo::LibrariesPath,   LibraryExecutablesPath = QLibraryInfo::LibraryExecutablesPath,   BinariesPath = QLibraryInfo::BinariesPath,   PluginsPath = QLibraryInfo::PluginsPath,   QmlImportsPath = QLibraryInfo::QmlImportsPath,   Qml2ImportsPath = QLibraryInfo::Qml2ImportsPath,   ArchDataPath = QLibraryInfo::ArchDataPath,   DataPath = QLibraryInfo::DataPath,   TranslationsPath = QLibraryInfo::TranslationsPath,   ExamplesPath = QLibraryInfo::ExamplesPath,   TestsPath = QLibraryInfo::TestsPath,   SettingsPath = QLibraryInfo::SettingsPath};
public slots:
void delete_QLibraryInfo(QLibraryInfo* obj) { delete obj; }
   const char*  static_QLibraryInfo_build();
   bool  static_QLibraryInfo_isDebugBuild();
   bool  static_QLibraryInfo_isSharedBuild();
   QString  static_QLibraryInfo_location(QLibraryInfo::LibraryPath  location);
   QString  static_QLibraryInfo_path(QLibraryInfo::LibraryPath  p);
   QStringList  static_QLibraryInfo_platformPluginArguments(const QString&  platformName);
};





class PythonQtWrapper_QLockFile : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LockError )
enum LockError{
  NoError = QLockFile::NoError,   LockFailedError = QLockFile::LockFailedError,   PermissionError = QLockFile::PermissionError,   UnknownError = QLockFile::UnknownError};
public slots:
QLockFile* new_QLockFile(const QString&  fileName);
void delete_QLockFile(QLockFile* obj) { delete obj; }
   QLockFile::LockError  error(QLockFile* theWrappedObject) const;
   QString  fileName(QLockFile* theWrappedObject) const;
   bool  getLockInfo(QLockFile* theWrappedObject, qint64*  pid, QString*  hostname, QString*  appname) const;
   bool  isLocked(QLockFile* theWrappedObject) const;
   bool  lock(QLockFile* theWrappedObject);
   bool  removeStaleLockFile(QLockFile* theWrappedObject);
   void setStaleLockTime(QLockFile* theWrappedObject, int  arg__1);
   int  staleLockTime(QLockFile* theWrappedObject) const;
   bool  tryLock(QLockFile* theWrappedObject, int  timeout = 0);
   void unlock(QLockFile* theWrappedObject);
};





class PythonQtWrapper_QLoggingCategory : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QLoggingCategory(QLoggingCategory* obj) { delete obj; }
   const char*  categoryName(QLoggingCategory* theWrappedObject) const;
   QLoggingCategory*  static_QLoggingCategory_defaultCategory();
   bool  isCriticalEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isDebugEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type) const;
   bool  isInfoEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isWarningEnabled(QLoggingCategory* theWrappedObject) const;
   void setEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type, bool  enable);
   void static_QLoggingCategory_setFilterRules(const QString&  rules);
};





class PythonQtWrapper_QMarginsF : public QObject
{ Q_OBJECT
public:
public slots:
QMarginsF* new_QMarginsF();
QMarginsF* new_QMarginsF(const QMargins&  margins);
QMarginsF* new_QMarginsF(qreal  left, qreal  top, qreal  right, qreal  bottom);
void delete_QMarginsF(QMarginsF* obj) { delete obj; }
   qreal  bottom(QMarginsF* theWrappedObject) const;
   bool  isNull(QMarginsF* theWrappedObject) const;
   qreal  left(QMarginsF* theWrappedObject) const;
   bool  __ne__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QMarginsF  __mul__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __imul__(QMarginsF* theWrappedObject, qreal  factor);
   QMarginsF  __add__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QRectF  __add__(QMarginsF* theWrappedObject, const QRectF&  rhs);
   QMarginsF  __add__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __iadd__(QMarginsF* theWrappedObject, const QMarginsF&  margins);
   QMarginsF*  __iadd__(QMarginsF* theWrappedObject, qreal  addend);
   QMarginsF  __sub__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QMarginsF  __sub__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __isub__(QMarginsF* theWrappedObject, const QMarginsF&  margins);
   QMarginsF*  __isub__(QMarginsF* theWrappedObject, qreal  subtrahend);
   QMarginsF  __div__(QMarginsF* theWrappedObject, qreal  divisor);
   QMarginsF*  __idiv__(QMarginsF* theWrappedObject, qreal  divisor);
   void writeTo(QMarginsF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   void readFrom(QMarginsF* theWrappedObject, QDataStream&  arg__1);
   QMarginsF  __or__(QMarginsF* theWrappedObject, const QMarginsF&  m2);
   qreal  right(QMarginsF* theWrappedObject) const;
   void setBottom(QMarginsF* theWrappedObject, qreal  abottom);
   void setLeft(QMarginsF* theWrappedObject, qreal  aleft);
   void setRight(QMarginsF* theWrappedObject, qreal  aright);
   void setTop(QMarginsF* theWrappedObject, qreal  atop);
   QMargins  toMargins(QMarginsF* theWrappedObject) const;
   qreal  top(QMarginsF* theWrappedObject) const;
    QString py_toString(QMarginsF*);
    bool __nonzero__(QMarginsF* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QMessageAuthenticationCode : public QObject
{ Q_OBJECT
public:
public slots:
QMessageAuthenticationCode* new_QMessageAuthenticationCode(QCryptographicHash::Algorithm  method, const QByteArray&  key = QByteArray());
void delete_QMessageAuthenticationCode(QMessageAuthenticationCode* obj) { delete obj; }
   bool  addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device);
   void addData(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  data);
   void addData(QMessageAuthenticationCode* theWrappedObject, const char*  data, qsizetype  length);
   QByteArray  static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method);
   void reset(QMessageAuthenticationCode* theWrappedObject);
   QByteArray  result(QMessageAuthenticationCode* theWrappedObject) const;
   void setKey(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  key);
};





class PythonQtShell_QMessageLogContext : public QMessageLogContext
{
public:
    PythonQtShell_QMessageLogContext():QMessageLogContext(),_wrapper(nullptr) {};
    PythonQtShell_QMessageLogContext(const char*  fileName, int  lineNumber, const char*  functionName, const char*  categoryName):QMessageLogContext(fileName, lineNumber, functionName, categoryName),_wrapper(nullptr) {};

   ~PythonQtShell_QMessageLogContext();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMessageLogContext : public QObject
{ Q_OBJECT
public:
public slots:
QMessageLogContext* new_QMessageLogContext();
QMessageLogContext* new_QMessageLogContext(const char*  fileName, int  lineNumber, const char*  functionName, const char*  categoryName);
void delete_QMessageLogContext(QMessageLogContext* obj) { delete obj; }
const char*  py_get_category(QMessageLogContext* theWrappedObject){ return theWrappedObject->category; }
const char*  py_get_file(QMessageLogContext* theWrappedObject){ return theWrappedObject->file; }
const char*  py_get_function(QMessageLogContext* theWrappedObject){ return theWrappedObject->function; }
void py_set_line(QMessageLogContext* theWrappedObject, int  line){ theWrappedObject->line = line; }
int  py_get_line(QMessageLogContext* theWrappedObject){ return theWrappedObject->line; }
void py_set_version(QMessageLogContext* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QMessageLogContext* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtWrapper_QMessageLogger : public QObject
{ Q_OBJECT
public:
public slots:
QMessageLogger* new_QMessageLogger();
QMessageLogger* new_QMessageLogger(const char*  file, int  line, const char*  function);
QMessageLogger* new_QMessageLogger(const char*  file, int  line, const char*  function, const char*  category);
void delete_QMessageLogger(QMessageLogger* obj) { delete obj; }
};





class PythonQtWrapper_QMetaClassInfo : public QObject
{ Q_OBJECT
public:
public slots:
QMetaClassInfo* new_QMetaClassInfo();
void delete_QMetaClassInfo(QMetaClassInfo* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaClassInfo* theWrappedObject) const;
   const char*  name(QMetaClassInfo* theWrappedObject) const;
   const char*  value(QMetaClassInfo* theWrappedObject) const;
};





class PythonQtWrapper_QMetaEnum : public QObject
{ Q_OBJECT
public:
public slots:
QMetaEnum* new_QMetaEnum();
void delete_QMetaEnum(QMetaEnum* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaEnum* theWrappedObject) const;
   const char*  enumName(QMetaEnum* theWrappedObject) const;
   bool  isFlag(QMetaEnum* theWrappedObject) const;
   bool  isScoped(QMetaEnum* theWrappedObject) const;
   bool  isValid(QMetaEnum* theWrappedObject) const;
   const char*  key(QMetaEnum* theWrappedObject, int  index) const;
   int  keyCount(QMetaEnum* theWrappedObject) const;
   int  keyToValue(QMetaEnum* theWrappedObject, const char*  key, bool*  ok = nullptr) const;
   int  keysToValue(QMetaEnum* theWrappedObject, const char*  keys, bool*  ok = nullptr) const;
   const char*  name(QMetaEnum* theWrappedObject) const;
   const char*  scope(QMetaEnum* theWrappedObject) const;
   int  value(QMetaEnum* theWrappedObject, int  index) const;
   const char*  valueToKey(QMetaEnum* theWrappedObject, int  value) const;
   QByteArray  valueToKeys(QMetaEnum* theWrappedObject, int  value) const;
    bool __nonzero__(QMetaEnum* obj) { return obj->isValid(); }
};





class PythonQtShell_QMetaMethod : public QMetaMethod
{
public:
    PythonQtShell_QMetaMethod():QMetaMethod(),_wrapper(nullptr) {};

   ~PythonQtShell_QMetaMethod();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMetaMethod : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Access Attributes MethodType )
enum Access{
  Private = QMetaMethod::Private,   Protected = QMetaMethod::Protected,   Public = QMetaMethod::Public};
enum Attributes{
  Compatibility = QMetaMethod::Compatibility,   Cloned = QMetaMethod::Cloned,   Scriptable = QMetaMethod::Scriptable};
enum MethodType{
  Method = QMetaMethod::Method,   Signal = QMetaMethod::Signal,   Slot = QMetaMethod::Slot,   Constructor = QMetaMethod::Constructor};
public slots:
QMetaMethod* new_QMetaMethod();
void delete_QMetaMethod(QMetaMethod* obj) { delete obj; }
   QMetaMethod::Access  access(QMetaMethod* theWrappedObject) const;
   int  attributes(QMetaMethod* theWrappedObject) const;
   const QMetaObject*  enclosingMetaObject(QMetaMethod* theWrappedObject) const;
   void getParameterTypes(QMetaMethod* theWrappedObject, int*  types) const;
   bool  isConst(QMetaMethod* theWrappedObject) const;
   bool  isValid(QMetaMethod* theWrappedObject) const;
   int  methodIndex(QMetaMethod* theWrappedObject) const;
   QByteArray  methodSignature(QMetaMethod* theWrappedObject) const;
   QMetaMethod::MethodType  methodType(QMetaMethod* theWrappedObject) const;
   QByteArray  name(QMetaMethod* theWrappedObject) const;
   bool  __ne__(QMetaMethod* theWrappedObject, const QMetaMethod&  m2);
   bool  __eq__(QMetaMethod* theWrappedObject, const QMetaMethod&  m2);
   int  parameterCount(QMetaMethod* theWrappedObject) const;
   QMetaType  parameterMetaType(QMetaMethod* theWrappedObject, int  index) const;
   QList<QByteArray >  parameterNames(QMetaMethod* theWrappedObject) const;
   int  parameterType(QMetaMethod* theWrappedObject, int  index) const;
   QByteArray  parameterTypeName(QMetaMethod* theWrappedObject, int  index) const;
   QList<QByteArray >  parameterTypes(QMetaMethod* theWrappedObject) const;
   int  relativeMethodIndex(QMetaMethod* theWrappedObject) const;
   QMetaType  returnMetaType(QMetaMethod* theWrappedObject) const;
   int  returnType(QMetaMethod* theWrappedObject) const;
   int  revision(QMetaMethod* theWrappedObject) const;
   const char*  tag(QMetaMethod* theWrappedObject) const;
   const char*  typeName(QMetaMethod* theWrappedObject) const;
    bool __nonzero__(QMetaMethod* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMetaProperty : public QObject
{ Q_OBJECT
public:
public slots:
QMetaProperty* new_QMetaProperty();
void delete_QMetaProperty(QMetaProperty* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaProperty* theWrappedObject) const;
   QMetaEnum  enumerator(QMetaProperty* theWrappedObject) const;
   bool  hasNotifySignal(QMetaProperty* theWrappedObject) const;
   bool  hasStdCppSet(QMetaProperty* theWrappedObject) const;
   bool  isAlias(QMetaProperty* theWrappedObject) const;
   bool  isBindable(QMetaProperty* theWrappedObject) const;
   bool  isConstant(QMetaProperty* theWrappedObject) const;
   bool  isDesignable(QMetaProperty* theWrappedObject) const;
   bool  isEnumType(QMetaProperty* theWrappedObject) const;
   bool  isFinal(QMetaProperty* theWrappedObject) const;
   bool  isFlagType(QMetaProperty* theWrappedObject) const;
   bool  isReadable(QMetaProperty* theWrappedObject) const;
   bool  isRequired(QMetaProperty* theWrappedObject) const;
   bool  isResettable(QMetaProperty* theWrappedObject) const;
   bool  isScriptable(QMetaProperty* theWrappedObject) const;
   bool  isStored(QMetaProperty* theWrappedObject) const;
   bool  isUser(QMetaProperty* theWrappedObject) const;
   bool  isValid(QMetaProperty* theWrappedObject) const;
   bool  isWritable(QMetaProperty* theWrappedObject) const;
   QMetaType  metaType(QMetaProperty* theWrappedObject) const;
   const char*  name(QMetaProperty* theWrappedObject) const;
   QMetaMethod  notifySignal(QMetaProperty* theWrappedObject) const;
   int  notifySignalIndex(QMetaProperty* theWrappedObject) const;
   int  propertyIndex(QMetaProperty* theWrappedObject) const;
   QVariant  read(QMetaProperty* theWrappedObject, const QObject*  obj) const;
   QVariant  readOnGadget(QMetaProperty* theWrappedObject, const void*  gadget) const;
   int  relativePropertyIndex(QMetaProperty* theWrappedObject) const;
   bool  reset(QMetaProperty* theWrappedObject, QObject*  obj) const;
   bool  resetOnGadget(QMetaProperty* theWrappedObject, void*  gadget) const;
   int  revision(QMetaProperty* theWrappedObject) const;
   QVariant::Type  type(QMetaProperty* theWrappedObject) const;
   int  typeId(QMetaProperty* theWrappedObject) const;
   const char*  typeName(QMetaProperty* theWrappedObject) const;
   int  userType(QMetaProperty* theWrappedObject) const;
   bool  write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const;
   bool  writeOnGadget(QMetaProperty* theWrappedObject, void*  gadget, const QVariant&  value) const;
    bool __nonzero__(QMetaProperty* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMetaType : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type TypeFlag )
Q_FLAGS(TypeFlags )
enum Type{
  UnknownType = QMetaType::UnknownType,   Bool = QMetaType::Bool,   Int = QMetaType::Int,   UInt = QMetaType::UInt,   LongLong = QMetaType::LongLong,   ULongLong = QMetaType::ULongLong,   Double = QMetaType::Double,   Long = QMetaType::Long,   Short = QMetaType::Short,   Char = QMetaType::Char,   ULong = QMetaType::ULong,   UShort = QMetaType::UShort,   UChar = QMetaType::UChar,   Float = QMetaType::Float,   VoidStar = QMetaType::VoidStar,   QChar = QMetaType::QChar,   QString = QMetaType::QString,   QStringList = QMetaType::QStringList,   QByteArray = QMetaType::QByteArray,   QBitArray = QMetaType::QBitArray,   QDate = QMetaType::QDate,   QTime = QMetaType::QTime,   QDateTime = QMetaType::QDateTime,   QUrl = QMetaType::QUrl,   QLocale = QMetaType::QLocale,   QRect = QMetaType::QRect,   QRectF = QMetaType::QRectF,   QSize = QMetaType::QSize,   QSizeF = QMetaType::QSizeF,   QLine = QMetaType::QLine,   QLineF = QMetaType::QLineF,   QPoint = QMetaType::QPoint,   QPointF = QMetaType::QPointF,   QEasingCurve = QMetaType::QEasingCurve,   QUuid = QMetaType::QUuid,   QVariant = QMetaType::QVariant,   QModelIndex = QMetaType::QModelIndex,   QPersistentModelIndex = QMetaType::QPersistentModelIndex,   QRegularExpression = QMetaType::QRegularExpression,   QJsonValue = QMetaType::QJsonValue,   QJsonObject = QMetaType::QJsonObject,   QJsonArray = QMetaType::QJsonArray,   QJsonDocument = QMetaType::QJsonDocument,   QByteArrayList = QMetaType::QByteArrayList,   QObjectStar = QMetaType::QObjectStar,   SChar = QMetaType::SChar,   Void = QMetaType::Void,   Nullptr = QMetaType::Nullptr,   QVariantMap = QMetaType::QVariantMap,   QVariantList = QMetaType::QVariantList,   QVariantHash = QMetaType::QVariantHash,   QVariantPair = QMetaType::QVariantPair,   QCborSimpleType = QMetaType::QCborSimpleType,   QCborValue = QMetaType::QCborValue,   QCborArray = QMetaType::QCborArray,   QCborMap = QMetaType::QCborMap,   Char16 = QMetaType::Char16,   Char32 = QMetaType::Char32,   Int128 = QMetaType::Int128,   UInt128 = QMetaType::UInt128,   Float128 = QMetaType::Float128,   BFloat16 = QMetaType::BFloat16,   Float16 = QMetaType::Float16,   QFont = QMetaType::QFont,   QPixmap = QMetaType::QPixmap,   QBrush = QMetaType::QBrush,   QColor = QMetaType::QColor,   QPalette = QMetaType::QPalette,   QIcon = QMetaType::QIcon,   QImage = QMetaType::QImage,   QPolygon = QMetaType::QPolygon,   QRegion = QMetaType::QRegion,   QBitmap = QMetaType::QBitmap,   QCursor = QMetaType::QCursor,   QKeySequence = QMetaType::QKeySequence,   QPen = QMetaType::QPen,   QTextLength = QMetaType::QTextLength,   QTextFormat = QMetaType::QTextFormat,   QTransform = QMetaType::QTransform,   QMatrix4x4 = QMetaType::QMatrix4x4,   QVector2D = QMetaType::QVector2D,   QVector3D = QMetaType::QVector3D,   QVector4D = QMetaType::QVector4D,   QQuaternion = QMetaType::QQuaternion,   QPolygonF = QMetaType::QPolygonF,   QColorSpace = QMetaType::QColorSpace,   QSizePolicy = QMetaType::QSizePolicy,   User = QMetaType::User};
enum TypeFlag{
  NeedsConstruction = QMetaType::NeedsConstruction,   NeedsDestruction = QMetaType::NeedsDestruction,   RelocatableType = QMetaType::RelocatableType,   MovableType = QMetaType::MovableType,   PointerToQObject = QMetaType::PointerToQObject,   IsEnumeration = QMetaType::IsEnumeration,   SharedPointerToQObject = QMetaType::SharedPointerToQObject,   WeakPointerToQObject = QMetaType::WeakPointerToQObject,   TrackingPointerToQObject = QMetaType::TrackingPointerToQObject,   IsUnsignedEnumeration = QMetaType::IsUnsignedEnumeration,   IsGadget = QMetaType::IsGadget,   PointerToGadget = QMetaType::PointerToGadget,   IsPointer = QMetaType::IsPointer,   IsQmlList = QMetaType::IsQmlList,   IsConst = QMetaType::IsConst,   NeedsCopyConstruction = QMetaType::NeedsCopyConstruction,   NeedsMoveConstruction = QMetaType::NeedsMoveConstruction};
Q_DECLARE_FLAGS(TypeFlags, TypeFlag)
public slots:
QMetaType* new_QMetaType();
QMetaType* new_QMetaType(int  type);
void delete_QMetaType(QMetaType* obj) { delete obj; }
   qsizetype  alignOf(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_canConvert(QMetaType  fromType, QMetaType  toType);
   bool  static_QMetaType_canView(QMetaType  fromType, QMetaType  toType);
   bool  static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   void*  static_QMetaType_construct(int  type, void*  where, const void*  copy);
   void*  construct(QMetaType* theWrappedObject, void*  where, const void*  copy = nullptr) const;
   bool  static_QMetaType_convert(QMetaType  fromType, const void*  from, QMetaType  toType, void*  to);
   bool  static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId);
   void*  create(QMetaType* theWrappedObject, const void*  copy = nullptr) const;
   void*  static_QMetaType_create(int  type, const void*  copy = nullptr);
   void static_QMetaType_destroy(int  type, void*  data);
   void destroy(QMetaType* theWrappedObject, void*  data) const;
   void static_QMetaType_destruct(int  type, void*  where);
   void destruct(QMetaType* theWrappedObject, void*  data) const;
   bool  equals(QMetaType* theWrappedObject, const void*  lhs, const void*  rhs) const;
   bool  static_QMetaType_equals(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   QMetaType::TypeFlags  flags(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_hasRegisteredConverterFunction(QMetaType  fromType, QMetaType  toType);
   bool  hasRegisteredDataStreamOperators(QMetaType* theWrappedObject) const;
   bool  hasRegisteredDebugStreamOperator(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_hasRegisteredDebugStreamOperator(int  typeId);
   bool  static_QMetaType_hasRegisteredMutableViewFunction(QMetaType  fromType, QMetaType  toType);
   int  id(QMetaType* theWrappedObject) const;
   bool  isCopyConstructible(QMetaType* theWrappedObject) const;
   bool  isDefaultConstructible(QMetaType* theWrappedObject) const;
   bool  isDestructible(QMetaType* theWrappedObject) const;
   bool  isEqualityComparable(QMetaType* theWrappedObject) const;
   bool  isMoveConstructible(QMetaType* theWrappedObject) const;
   bool  isOrdered(QMetaType* theWrappedObject) const;
   bool  isRegistered(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_isRegistered(int  type);
   bool  isValid(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_load(QDataStream&  stream, int  type, void*  data);
   bool  load(QMetaType* theWrappedObject, QDataStream&  stream, void*  data) const;
   const QMetaObject*  metaObject(QMetaType* theWrappedObject) const;
   const QMetaObject*  static_QMetaType_metaObjectForType(int  type);
   const char*  name(QMetaType* theWrappedObject) const;
   bool  __ne__(QMetaType* theWrappedObject, QMetaType  b);
   bool  __eq__(QMetaType* theWrappedObject, QMetaType  b);
   void static_QMetaType_registerNormalizedTypedef(const QByteArray&  normalizedTypeName, QMetaType  type);
   void registerType(QMetaType* theWrappedObject) const;
   bool  save(QMetaType* theWrappedObject, QDataStream&  stream, const void*  data) const;
   bool  static_QMetaType_save(QDataStream&  stream, int  type, const void*  data);
   qsizetype  sizeOf(QMetaType* theWrappedObject) const;
   int  static_QMetaType_sizeOf(int  type);
   int  static_QMetaType_type(const QByteArray&  typeName);
   int  static_QMetaType_type(const char*  typeName);
   QMetaType::TypeFlags  static_QMetaType_typeFlags(int  type);
   const char*  static_QMetaType_typeName(int  type);
   void static_QMetaType_unregisterConverterFunction(QMetaType  from, QMetaType  to);
   void static_QMetaType_unregisterMetaType(QMetaType  type);
   void static_QMetaType_unregisterMutableViewFunction(QMetaType  from, QMetaType  to);
   bool  static_QMetaType_view(QMetaType  fromType, void*  from, QMetaType  toType, void*  to);
    bool __nonzero__(QMetaType* obj) { return obj->isValid(); }
};





class PythonQtShell_QMimeData : public QMimeData
{
public:
    PythonQtShell_QMimeData():QMimeData(),_wrapper(nullptr) {};

   ~PythonQtShell_QMimeData() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QStringList  formats() const override;
bool  hasFormat(const QString&  mimetype) const override;
QVariant  retrieveData(const QString&  mimetype, QMetaType  preferredType) const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMimeData : public QMimeData
{ public:
inline QVariant  promoted_retrieveData(const QString&  mimetype, QMetaType  preferredType) const { return this->retrieveData(mimetype, preferredType); }
inline QStringList  py_q_formats() const { return QMimeData::formats(); }
inline bool  py_q_hasFormat(const QString&  mimetype) const { return QMimeData::hasFormat(mimetype); }
inline QVariant  py_q_retrieveData(const QString&  mimetype, QMetaType  preferredType) const { return QMimeData::retrieveData(mimetype, preferredType); }
};

class PythonQtWrapper_QMimeData : public QObject
{ Q_OBJECT
public:
public slots:
QMimeData* new_QMimeData();
void delete_QMimeData(QMimeData* obj) { delete obj; }
   void clear(QMimeData* theWrappedObject);
   QVariant  colorData(QMimeData* theWrappedObject) const;
   QByteArray  data(QMimeData* theWrappedObject, const QString&  mimetype) const;
   QStringList  formats(QMimeData* theWrappedObject) const;
   QStringList  py_q_formats(QMimeData* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->py_q_formats());}
   bool  hasColor(QMimeData* theWrappedObject) const;
   bool  hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  py_q_hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const{  return (((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->py_q_hasFormat(mimetype));}
   bool  hasHtml(QMimeData* theWrappedObject) const;
   bool  hasImage(QMimeData* theWrappedObject) const;
   bool  hasText(QMimeData* theWrappedObject) const;
   bool  hasUrls(QMimeData* theWrappedObject) const;
   QString  html(QMimeData* theWrappedObject) const;
   QVariant  imageData(QMimeData* theWrappedObject) const;
   void removeFormat(QMimeData* theWrappedObject, const QString&  mimetype);
   QVariant  retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QMetaType  preferredType) const;
   QVariant  py_q_retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QMetaType  preferredType) const{  return (((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->py_q_retrieveData(mimetype, preferredType));}
   void setColorData(QMimeData* theWrappedObject, const QVariant&  color);
   void setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data);
   void setHtml(QMimeData* theWrappedObject, const QString&  html);
   void setImageData(QMimeData* theWrappedObject, const QVariant&  image);
   void setText(QMimeData* theWrappedObject, const QString&  text);
   void setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls);
   QString  text(QMimeData* theWrappedObject) const;
   QList<QUrl >  urls(QMimeData* theWrappedObject) const;
};





class PythonQtWrapper_QMimeDatabase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MatchMode )
enum MatchMode{
  MatchDefault = QMimeDatabase::MatchDefault,   MatchExtension = QMimeDatabase::MatchExtension,   MatchContent = QMimeDatabase::MatchContent};
public slots:
QMimeDatabase* new_QMimeDatabase();
void delete_QMimeDatabase(QMimeDatabase* obj) { delete obj; }
   QList<QMimeType >  allMimeTypes(QMimeDatabase* theWrappedObject) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const;
   QMimeType  mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const;
   QMimeType  mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const;
   QList<QMimeType >  mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
   QString  suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
};





class PythonQtWrapper_QMimeType : public QObject
{ Q_OBJECT
public:
public slots:
QMimeType* new_QMimeType();
QMimeType* new_QMimeType(const QMimeType&  other);
void delete_QMimeType(QMimeType* obj) { delete obj; }
   QStringList  aliases(QMimeType* theWrappedObject) const;
   QStringList  allAncestors(QMimeType* theWrappedObject) const;
   QString  comment(QMimeType* theWrappedObject) const;
   QString  filterString(QMimeType* theWrappedObject) const;
   QString  genericIconName(QMimeType* theWrappedObject) const;
   QStringList  globPatterns(QMimeType* theWrappedObject) const;
   QString  iconName(QMimeType* theWrappedObject) const;
   bool  inherits(QMimeType* theWrappedObject, const QString&  mimeTypeName) const;
   bool  isDefault(QMimeType* theWrappedObject) const;
   bool  isValid(QMimeType* theWrappedObject) const;
   QString  name(QMimeType* theWrappedObject) const;
   bool  __ne__(QMimeType* theWrappedObject, const QMimeType&  other) const;
   QMimeType*  operator_assign(QMimeType* theWrappedObject, const QMimeType&  other);
   bool  __eq__(QMimeType* theWrappedObject, const QMimeType&  other) const;
   QStringList  parentMimeTypes(QMimeType* theWrappedObject) const;
   QString  preferredSuffix(QMimeType* theWrappedObject) const;
   QStringList  suffixes(QMimeType* theWrappedObject) const;
   void swap(QMimeType* theWrappedObject, QMimeType&  other);
    QString py_toString(QMimeType*);
    bool __nonzero__(QMimeType* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QModelIndex* new_QModelIndex();
QModelIndex* new_QModelIndex(const QModelIndex& other) {
QModelIndex* a = new QModelIndex();
*((QModelIndex*)a) = other;
return a; }
void delete_QModelIndex(QModelIndex* obj) { delete obj; }
   int  column(QModelIndex* theWrappedObject) const;
   const void*  constInternalPointer(QModelIndex* theWrappedObject) const;
   QVariant  data(QModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   Qt::ItemFlags  flags(QModelIndex* theWrappedObject) const;
   quintptr  internalId(QModelIndex* theWrappedObject) const;
   void*  internalPointer(QModelIndex* theWrappedObject) const;
   bool  isValid(QModelIndex* theWrappedObject) const;
   const QAbstractItemModel*  model(QModelIndex* theWrappedObject) const;
   bool  __ne__(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __lt__(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __eq__(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   QModelIndex  parent(QModelIndex* theWrappedObject) const;
   int  row(QModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QModelIndex* theWrappedObject, int  row, int  column) const;
   QModelIndex  siblingAtColumn(QModelIndex* theWrappedObject, int  column) const;
   QModelIndex  siblingAtRow(QModelIndex* theWrappedObject, int  row) const;
    QString py_toString(QModelIndex*);
    bool __nonzero__(QModelIndex* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMutex : public QObject
{ Q_OBJECT
public:
public slots:
QMutex* new_QMutex();
void delete_QMutex(QMutex* obj) { delete obj; }
   bool  tryLock(QMutex* theWrappedObject, int  timeout);
   bool  try_lock(QMutex* theWrappedObject);
};





class PythonQtWrapper_QMutexLocker : public QObject
{ Q_OBJECT
public:
public slots:
QMutexLocker* new_QMutexLocker(Mutex*  mutex);
void delete_QMutexLocker(QMutexLocker* obj) { delete obj; }
   bool  isLocked(QMutexLocker* theWrappedObject) const;
   Mutex*  mutex(QMutexLocker* theWrappedObject) const;
   void relock(QMutexLocker* theWrappedObject);
   void swap(QMutexLocker* theWrappedObject, QMutexLocker&  other);
   void unlock(QMutexLocker* theWrappedObject);

    void __enter__(QMutexLocker* self) {}
    void __exit__(QMutexLocker* self, PyObject* type, PyObject* value, PyObject* traceback) { self->unlock(); }
    
};


