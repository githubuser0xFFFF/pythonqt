#include <PythonQt.h>
#include <PythonQtConversion.h>
#include <QDateTime>
#include <QDir>
#include <QObject>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qanimationgroup.h>
#include <qbasictimer.h>
#include <qbuffer.h>
#include <qbytearray.h>
#include <qbytearraymatcher.h>
#include <qcollator.h>
#include <qcommandlineoption.h>
#include <qcommandlineparser.h>
#include <qcontainerfwd.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcryptographichash.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdeadlinetimer.h>
#include <qdir.h>
#include <qdiriterator.h>
#include <qeasingcurve.h>
#include <qelapsedtimer.h>
#include <qevent.h>
#include <qeventloop.h>
#include <qfactoryinterface.h>
#include <qfile.h>
#include <qfiledevice.h>
#include <qfileinfo.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpoint.h>
#include <qsize.h>
#include <qthread.h>
#include <qtranslator.h>



class PythonQtShell_QAbstractAnimation : public QAbstractAnimation
{
public:
    PythonQtShell_QAbstractAnimation(QObject*  parent = nullptr):QAbstractAnimation(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  currentTime) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractAnimation : public QAbstractAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return this->duration(); }
inline bool  py_q_event(QEvent*  event) { return QAbstractAnimation::event(event); }
inline void py_q_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QAbstractAnimation::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QAbstractAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QAbstractAnimation : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DeletionPolicy )
enum DeletionPolicy{
  KeepWhenStopped = QAbstractAnimation::KeepWhenStopped,   DeleteWhenStopped = QAbstractAnimation::DeleteWhenStopped};
public slots:
QAbstractAnimation* new_QAbstractAnimation(QObject*  parent = nullptr);
void delete_QAbstractAnimation(QAbstractAnimation* obj) { delete obj; }
   int  currentLoop(QAbstractAnimation* theWrappedObject) const;
   int  currentLoopTime(QAbstractAnimation* theWrappedObject) const;
   int  currentTime(QAbstractAnimation* theWrappedObject) const;
   QAbstractAnimation::Direction  direction(QAbstractAnimation* theWrappedObject) const;
   int  duration(QAbstractAnimation* theWrappedObject) const;
   int  py_q_duration(QAbstractAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QAbstractAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_event(event));}
   QAnimationGroup*  group(QAbstractAnimation* theWrappedObject) const;
   int  loopCount(QAbstractAnimation* theWrappedObject) const;
   void setDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   void setLoopCount(QAbstractAnimation* theWrappedObject, int  loopCount);
   QAbstractAnimation::State  state(QAbstractAnimation* theWrappedObject) const;
   int  totalDuration(QAbstractAnimation* theWrappedObject) const;
   void updateCurrentTime(QAbstractAnimation* theWrappedObject, int  currentTime);
   void py_q_updateCurrentTime(QAbstractAnimation* theWrappedObject, int  currentTime){  (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_updateCurrentTime(currentTime));}
   void updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   void py_q_updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_updateDirection(direction));}
   void updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
   void py_q_updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QAbstractItemModel : public QAbstractItemModel
{
public:
    PythonQtShell_QAbstractItemModel(QObject*  parent = nullptr):QAbstractItemModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractItemModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
bool  clearItemData(const QModelIndex&  index) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const override;
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

class PythonQtPublicPromoter_QAbstractItemModel : public QAbstractItemModel
{ public:
inline void promoted_beginInsertColumns(const QModelIndex&  parent, int  first, int  last) { this->beginInsertColumns(parent, first, last); }
inline void promoted_beginInsertRows(const QModelIndex&  parent, int  first, int  last) { this->beginInsertRows(parent, first, last); }
inline bool  promoted_beginMoveColumns(const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationColumn) { return this->beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn); }
inline bool  promoted_beginMoveRows(const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationRow) { return this->beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow); }
inline void promoted_beginRemoveColumns(const QModelIndex&  parent, int  first, int  last) { this->beginRemoveColumns(parent, first, last); }
inline void promoted_beginRemoveRows(const QModelIndex&  parent, int  first, int  last) { this->beginRemoveRows(parent, first, last); }
inline void promoted_beginResetModel() { this->beginResetModel(); }
inline void promoted_changePersistentIndex(const QModelIndex&  from, const QModelIndex&  to) { this->changePersistentIndex(from, to); }
inline void promoted_changePersistentIndexList(const QList<QModelIndex >&  from, const QList<QModelIndex >&  to) { this->changePersistentIndexList(from, to); }
inline QModelIndex  promoted_createIndex(int  row, int  column, const void*  data = nullptr) const { return this->createIndex(row, column, data); }
inline QModelIndex  promoted_createIndex(int  row, int  column, quintptr  id) const { return this->createIndex(row, column, id); }
inline bool  promoted_decodeData(int  row, int  column, const QModelIndex&  parent, QDataStream&  stream) { return this->decodeData(row, column, parent, stream); }
inline void promoted_encodeData(const QList<QModelIndex >&  indexes, QDataStream&  stream) const { this->encodeData(indexes, stream); }
inline void promoted_endInsertColumns() { this->endInsertColumns(); }
inline void promoted_endInsertRows() { this->endInsertRows(); }
inline void promoted_endMoveColumns() { this->endMoveColumns(); }
inline void promoted_endMoveRows() { this->endMoveRows(); }
inline void promoted_endRemoveColumns() { this->endRemoveColumns(); }
inline void promoted_endRemoveRows() { this->endRemoveRows(); }
inline void promoted_endResetModel() { this->endResetModel(); }
inline QList<QModelIndex >  promoted_persistentIndexList() const { return this->persistentIndexList(); }
inline void promoted_resetInternalData() { this->resetInternalData(); }
inline QModelIndex  py_q_buddy(const QModelIndex&  index) const { return QAbstractItemModel::buddy(index); }
inline bool  py_q_canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const { return QAbstractItemModel::canDropMimeData(data, action, row, column, parent); }
inline bool  py_q_canFetchMore(const QModelIndex&  parent) const { return QAbstractItemModel::canFetchMore(parent); }
inline bool  py_q_clearItemData(const QModelIndex&  index) { return QAbstractItemModel::clearItemData(index); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return this->columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return this->data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractItemModel::dropMimeData(data, action, row, column, parent); }
inline void py_q_fetchMore(const QModelIndex&  parent) { QAbstractItemModel::fetchMore(parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractItemModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QAbstractItemModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QAbstractItemModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return this->index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QAbstractItemModel::itemData(index); }
inline QList<QModelIndex >  py_q_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QAbstractItemModel::match(start, role, value, hits, flags); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QAbstractItemModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QAbstractItemModel::mimeTypes(); }
inline bool  py_q_moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild); }
inline bool  py_q_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return this->parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeRows(row, count, parent); }
inline void py_q_resetInternalData() { QAbstractItemModel::resetInternalData(); }
inline void py_q_revert() { QAbstractItemModel::revert(); }
inline QHash<int , QByteArray >  py_q_roleNames() const { return QAbstractItemModel::roleNames(); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return this->rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setData(index, value, role); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setHeaderData(section, orientation, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QAbstractItemModel::setItemData(index, roles); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractItemModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QAbstractItemModel::sort(column, order); }
inline QSize  py_q_span(const QModelIndex&  index) const { return QAbstractItemModel::span(index); }
inline bool  py_q_submit() { return QAbstractItemModel::submit(); }
inline Qt::DropActions  py_q_supportedDragActions() const { return QAbstractItemModel::supportedDragActions(); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QAbstractItemModel::supportedDropActions(); }
};

class PythonQtWrapper_QAbstractItemModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractItemModel* new_QAbstractItemModel(QObject*  parent = nullptr);
void delete_QAbstractItemModel(QAbstractItemModel* obj) { delete obj; }
   void beginInsertColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginInsertRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   bool  beginMoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationColumn);
   bool  beginMoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationRow);
   void beginRemoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginRemoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginResetModel(QAbstractItemModel* theWrappedObject);
   QModelIndex  buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  py_q_buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_buddy(index));}
   bool  canDropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
   bool  py_q_canDropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_canDropMimeData(data, action, row, column, parent));}
   bool  canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const;
   bool  py_q_canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_canFetchMore(parent));}
   void changePersistentIndex(QAbstractItemModel* theWrappedObject, const QModelIndex&  from, const QModelIndex&  to);
   void changePersistentIndexList(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  from, const QList<QModelIndex >&  to);
   bool  clearItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index);
   bool  py_q_clearItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_clearItemData(index));}
   int  columnCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   int  py_q_columnCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_columnCount(parent));}
   QModelIndex  createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const void*  data = nullptr) const;
   QModelIndex  createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, quintptr  id) const;
   QVariant  data(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const;
   QVariant  py_q_data(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_data(index, role));}
   bool  decodeData(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent, QDataStream&  stream);
   bool  dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   bool  py_q_dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   void encodeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes, QDataStream&  stream) const;
   void endInsertColumns(QAbstractItemModel* theWrappedObject);
   void endInsertRows(QAbstractItemModel* theWrappedObject);
   void endMoveColumns(QAbstractItemModel* theWrappedObject);
   void endMoveRows(QAbstractItemModel* theWrappedObject);
   void endRemoveColumns(QAbstractItemModel* theWrappedObject);
   void endRemoveRows(QAbstractItemModel* theWrappedObject);
   void endResetModel(QAbstractItemModel* theWrappedObject);
   void fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent);
   void py_q_fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_fetchMore(parent));}
   Qt::ItemFlags  flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   Qt::ItemFlags  py_q_flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_flags(index));}
   bool  hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  py_q_hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_hasChildren(parent));}
   bool  hasIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QVariant  py_q_headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  index(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  py_q_index(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  insertColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  insertRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QMap<int , QVariant >  itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QMap<int , QVariant >  py_q_itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_itemData(index));}
   QList<QModelIndex >  match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
   QList<QModelIndex >  py_q_match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_match(start, role, value, hits, flags));}
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const;
   PythonQtPassOwnershipToPython<QMimeData*  > py_q_mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  mimeTypes(QAbstractItemModel* theWrappedObject) const;
   QStringList  py_q_mimeTypes(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_mimeTypes());}
   bool  moveColumn(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, const QModelIndex&  destinationParent, int  destinationChild);
   bool  moveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
   bool  py_q_moveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild));}
   bool  moveRow(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, const QModelIndex&  destinationParent, int  destinationChild);
   bool  moveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
   bool  py_q_moveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));}
   QModelIndex  parent(QAbstractItemModel* theWrappedObject, const QModelIndex&  child) const;
   QModelIndex  py_q_parent(QAbstractItemModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_parent(child));}
   QList<QModelIndex >  persistentIndexList(QAbstractItemModel* theWrappedObject) const;
   bool  removeColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  removeRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   void py_q_resetInternalData(QAbstractItemModel* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_resetInternalData());}
   void py_q_revert(QAbstractItemModel* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_revert());}
   QHash<int , QByteArray >  roleNames(QAbstractItemModel* theWrappedObject) const;
   QHash<int , QByteArray >  py_q_roleNames(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_roleNames());}
   int  rowCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   int  py_q_rowCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   bool  py_q_setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_setData(index, value, role));}
   bool  setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   bool  py_q_setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   bool  setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
   bool  py_q_setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   QModelIndex  sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
   QModelIndex  py_q_sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void py_q_sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_sort(column, order));}
   QSize  span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QSize  py_q_span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_span(index));}
   bool  py_q_submit(QAbstractItemModel* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_submit());}
   Qt::DropActions  supportedDragActions(QAbstractItemModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDragActions(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_supportedDragActions());}
   Qt::DropActions  supportedDropActions(QAbstractItemModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtShell_QAbstractListModel : public QAbstractListModel
{
public:
    PythonQtShell_QAbstractListModel(QObject*  parent = nullptr):QAbstractListModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractListModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
bool  clearItemData(const QModelIndex&  index) override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void resetInternalData() override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
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

class PythonQtPublicPromoter_QAbstractListModel : public QAbstractListModel
{ public:
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractListModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractListModel::flags(index); }
inline QModelIndex  py_q_index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const { return QAbstractListModel::index(row, column, parent); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractListModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QAbstractListModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractListModel* new_QAbstractListModel(QObject*  parent = nullptr);
void delete_QAbstractListModel(QAbstractListModel* obj) { delete obj; }
   bool  py_q_dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   Qt::ItemFlags  py_q_flags(QAbstractListModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_flags(index));}
   QModelIndex  py_q_index(QAbstractListModel* theWrappedObject, int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_index(row, column, parent));}
   QModelIndex  py_q_sibling(QAbstractListModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtShell_QAnimationGroup : public QAnimationGroup
{
public:
    PythonQtShell_QAnimationGroup(QObject*  parent = nullptr):QAnimationGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAnimationGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  currentTime) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAnimationGroup : public QAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  py_q_event(QEvent*  event) { return QAnimationGroup::event(event); }
};

class PythonQtWrapper_QAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QAnimationGroup* new_QAnimationGroup(QObject*  parent = nullptr);
void delete_QAnimationGroup(QAnimationGroup* obj) { delete obj; }
   void addAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation);
   QAbstractAnimation*  animationAt(QAnimationGroup* theWrappedObject, int  index) const;
   int  animationCount(QAnimationGroup* theWrappedObject) const;
   void clear(QAnimationGroup* theWrappedObject);
   bool  py_q_event(QAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAnimationGroup*)theWrappedObject)->py_q_event(event));}
   int  indexOfAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation) const;
   void insertAnimation(QAnimationGroup* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation);
   void removeAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractAnimation* >  animation);
   PythonQtPassOwnershipToPython<QAbstractAnimation*  > takeAnimation(QAnimationGroup* theWrappedObject, int  index);
};





class PythonQtShell_QApplicationStateChangeEvent : public QApplicationStateChangeEvent
{
public:
    PythonQtShell_QApplicationStateChangeEvent(Qt::ApplicationState  state):QApplicationStateChangeEvent(state),_wrapper(nullptr) {};
    PythonQtShell_QApplicationStateChangeEvent(const QApplicationStateChangeEvent&  arg__1):QApplicationStateChangeEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QApplicationStateChangeEvent() override;

QApplicationStateChangeEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QApplicationStateChangeEvent : public QApplicationStateChangeEvent
{ public:
inline QApplicationStateChangeEvent&  promoted_operator_assign(const QApplicationStateChangeEvent&  other) { return this->operator=(other); }
inline QApplicationStateChangeEvent*  py_q_clone() const { return QApplicationStateChangeEvent::clone(); }
};

class PythonQtWrapper_QApplicationStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QApplicationStateChangeEvent* new_QApplicationStateChangeEvent(Qt::ApplicationState  state);
QApplicationStateChangeEvent* new_QApplicationStateChangeEvent(const QApplicationStateChangeEvent&  arg__1);
void delete_QApplicationStateChangeEvent(QApplicationStateChangeEvent* obj) { delete obj; }
   Qt::ApplicationState  applicationState(QApplicationStateChangeEvent* theWrappedObject) const;
   QApplicationStateChangeEvent*  py_q_clone(QApplicationStateChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QApplicationStateChangeEvent*)theWrappedObject)->py_q_clone());}
   QApplicationStateChangeEvent*  operator_assign(QApplicationStateChangeEvent* theWrappedObject, const QApplicationStateChangeEvent&  other);
};





class PythonQtWrapper_QBasicMutex : public QObject
{ Q_OBJECT
public:
public slots:
QBasicMutex* new_QBasicMutex();
void delete_QBasicMutex(QBasicMutex* obj) { delete obj; }
   void lock(QBasicMutex* theWrappedObject);
   bool  tryLock(QBasicMutex* theWrappedObject);
   bool  try_lock(QBasicMutex* theWrappedObject);
   void unlock(QBasicMutex* theWrappedObject);
};





class PythonQtWrapper_QBasicTimer : public QObject
{ Q_OBJECT
public:
public slots:
QBasicTimer* new_QBasicTimer();
QBasicTimer* new_QBasicTimer(const QBasicTimer& other) {
QBasicTimer* a = new QBasicTimer();
*((QBasicTimer*)a) = other;
return a; }
void delete_QBasicTimer(QBasicTimer* obj) { delete obj; }
   bool  isActive(QBasicTimer* theWrappedObject) const;
   void start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj);
   void start(QBasicTimer* theWrappedObject, int  msec, Qt::TimerType  timerType, QObject*  obj);
   void stop(QBasicTimer* theWrappedObject);
   void swap(QBasicTimer* theWrappedObject, QBasicTimer&  other);
   int  timerId(QBasicTimer* theWrappedObject) const;
};





class PythonQtShell_QBuffer : public QBuffer
{
public:
    PythonQtShell_QBuffer(QByteArray*  buf, QObject*  parent = nullptr):QBuffer(buf, parent),_wrapper(nullptr) {};
    PythonQtShell_QBuffer(QObject*  parent = nullptr):QBuffer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QBuffer() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void connectNotify(const QMetaMethod&  arg__1) override;
void customEvent(QEvent*  event) override;
void disconnectNotify(const QMetaMethod&  arg__1) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  openMode) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  seek(qint64  off) override;
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

class PythonQtPublicPromoter_QBuffer : public QBuffer
{ public:
inline void promoted_connectNotify(const QMetaMethod&  arg__1) { this->connectNotify(arg__1); }
inline void promoted_disconnectNotify(const QMetaMethod&  arg__1) { this->disconnectNotify(arg__1); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QBuffer::atEnd(); }
inline bool  py_q_canReadLine() const { return QBuffer::canReadLine(); }
inline void py_q_close() { QBuffer::close(); }
inline void py_q_connectNotify(const QMetaMethod&  arg__1) { QBuffer::connectNotify(arg__1); }
inline void py_q_disconnectNotify(const QMetaMethod&  arg__1) { QBuffer::disconnectNotify(arg__1); }
inline bool  py_q_open(QIODeviceBase::OpenMode  openMode) { return QBuffer::open(openMode); }
inline qint64  py_q_pos() const { return QBuffer::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QBuffer::readData(data, maxlen); }
inline bool  py_q_seek(qint64  off) { return QBuffer::seek(off); }
inline qint64  py_q_size() const { return QBuffer::size(); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QBuffer::writeData(data, len); }
};

class PythonQtWrapper_QBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QBuffer* new_QBuffer(QByteArray*  buf, QObject*  parent = nullptr);
QBuffer* new_QBuffer(QObject*  parent = nullptr);
void delete_QBuffer(QBuffer* obj) { delete obj; }
   bool  py_q_atEnd(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_atEnd());}
   const QByteArray*  buffer(QBuffer* theWrappedObject) const;
   bool  py_q_canReadLine(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_canReadLine());}
   void py_q_close(QBuffer* theWrappedObject){  (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_close());}
   void connectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1);
   void py_q_connectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1){  (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_connectNotify(arg__1));}
   const QByteArray*  data(QBuffer* theWrappedObject) const;
   void disconnectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1);
   void py_q_disconnectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1){  (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_disconnectNotify(arg__1));}
   bool  py_q_open(QBuffer* theWrappedObject, QIODeviceBase::OpenMode  openMode){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_open(openMode));}
   qint64  py_q_pos(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_pos());}
   qint64  py_q_readData(QBuffer* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_readData(data, maxlen));}
   bool  py_q_seek(QBuffer* theWrappedObject, qint64  off){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_seek(off));}
   void setBuffer(QBuffer* theWrappedObject, QByteArray*  a);
   void setData(QBuffer* theWrappedObject, const QByteArray&  data);
   void setData(QBuffer* theWrappedObject, const char*  data, qsizetype  len);
   qint64  py_q_size(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_size());}
   qint64  py_q_writeData(QBuffer* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QByteArrayMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QByteArrayMatcher* new_QByteArrayMatcher();
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArray&  pattern);
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArrayMatcher&  other);
QByteArrayMatcher* new_QByteArrayMatcher(const char*  pattern, qsizetype  length = -1);
void delete_QByteArrayMatcher(QByteArrayMatcher* obj) { delete obj; }
   qsizetype  indexIn(QByteArrayMatcher* theWrappedObject, const char*  str, qsizetype  len, qsizetype  from = 0) const;
   QByteArray  pattern(QByteArrayMatcher* theWrappedObject) const;
   void setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern);
};





class PythonQtShell_QChildEvent : public QChildEvent
{
public:
    PythonQtShell_QChildEvent(QEvent::Type  type, QObject*  child):QChildEvent(type, child),_wrapper(nullptr) {};
    PythonQtShell_QChildEvent(const QChildEvent&  arg__1):QChildEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QChildEvent() override;

QChildEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QChildEvent : public QChildEvent
{ public:
inline QChildEvent&  promoted_operator_assign(const QChildEvent&  other) { return this->operator=(other); }
inline QChildEvent*  py_q_clone() const { return QChildEvent::clone(); }
};

class PythonQtWrapper_QChildEvent : public QObject
{ Q_OBJECT
public:
public slots:
QChildEvent* new_QChildEvent(QEvent::Type  type, QObject*  child);
QChildEvent* new_QChildEvent(const QChildEvent&  arg__1);
void delete_QChildEvent(QChildEvent* obj) { delete obj; }
   bool  added(QChildEvent* theWrappedObject) const;
   QObject*  child(QChildEvent* theWrappedObject) const;
   QChildEvent*  py_q_clone(QChildEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QChildEvent*)theWrappedObject)->py_q_clone());}
   QChildEvent*  operator_assign(QChildEvent* theWrappedObject, const QChildEvent&  other);
   bool  polished(QChildEvent* theWrappedObject) const;
   bool  removed(QChildEvent* theWrappedObject) const;
};





class PythonQtWrapper_QCollator : public QObject
{ Q_OBJECT
public:
public slots:
QCollator* new_QCollator();
QCollator* new_QCollator(const QCollator&  arg__1);
QCollator* new_QCollator(const QLocale&  locale);
void delete_QCollator(QCollator* obj) { delete obj; }
   Qt::CaseSensitivity  caseSensitivity(QCollator* theWrappedObject) const;
   int  compare(QCollator* theWrappedObject, const QChar*  s1, qsizetype  len1, const QChar*  s2, qsizetype  len2) const;
   int  compare(QCollator* theWrappedObject, const QString&  s1, const QString&  s2) const;
   bool  ignorePunctuation(QCollator* theWrappedObject) const;
   QLocale  locale(QCollator* theWrappedObject) const;
   bool  numericMode(QCollator* theWrappedObject) const;
   bool  operator_cast_(QCollator* theWrappedObject, const QString&  s1, const QString&  s2) const;
   QCollator*  operator_assign(QCollator* theWrappedObject, const QCollator&  arg__1);
   void setCaseSensitivity(QCollator* theWrappedObject, Qt::CaseSensitivity  cs);
   void setIgnorePunctuation(QCollator* theWrappedObject, bool  on);
   void setLocale(QCollator* theWrappedObject, const QLocale&  locale);
   void setNumericMode(QCollator* theWrappedObject, bool  on);
   QCollatorSortKey  sortKey(QCollator* theWrappedObject, const QString&  string) const;
   void swap(QCollator* theWrappedObject, QCollator&  other);
};





class PythonQtWrapper_QCollatorSortKey : public QObject
{ Q_OBJECT
public:
public slots:
QCollatorSortKey* new_QCollatorSortKey(const QCollatorSortKey&  other);
void delete_QCollatorSortKey(QCollatorSortKey* obj) { delete obj; }
   int  compare(QCollatorSortKey* theWrappedObject, const QCollatorSortKey&  key) const;
   bool  __lt__(QCollatorSortKey* theWrappedObject, const QCollatorSortKey&  rhs);
   QCollatorSortKey*  operator_assign(QCollatorSortKey* theWrappedObject, const QCollatorSortKey&  other);
   void swap(QCollatorSortKey* theWrappedObject, QCollatorSortKey&  other);
};





class PythonQtWrapper_QCommandLineOption : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Flag )
enum Flag{
  HiddenFromHelp = QCommandLineOption::HiddenFromHelp,   ShortOptionStyle = QCommandLineOption::ShortOptionStyle};
public slots:
QCommandLineOption* new_QCommandLineOption(const QCommandLineOption&  other);
QCommandLineOption* new_QCommandLineOption(const QString&  name);
QCommandLineOption* new_QCommandLineOption(const QString&  name, const QString&  description, const QString&  valueName = QString(), const QString&  defaultValue = QString());
QCommandLineOption* new_QCommandLineOption(const QStringList&  names);
QCommandLineOption* new_QCommandLineOption(const QStringList&  names, const QString&  description, const QString&  valueName = QString(), const QString&  defaultValue = QString());
void delete_QCommandLineOption(QCommandLineOption* obj) { delete obj; }
   QStringList  defaultValues(QCommandLineOption* theWrappedObject) const;
   QString  description(QCommandLineOption* theWrappedObject) const;
   QStringList  names(QCommandLineOption* theWrappedObject) const;
   QCommandLineOption*  operator_assign(QCommandLineOption* theWrappedObject, const QCommandLineOption&  other);
   void setDefaultValue(QCommandLineOption* theWrappedObject, const QString&  defaultValue);
   void setDefaultValues(QCommandLineOption* theWrappedObject, const QStringList&  defaultValues);
   void setDescription(QCommandLineOption* theWrappedObject, const QString&  description);
   void setValueName(QCommandLineOption* theWrappedObject, const QString&  name);
   void swap(QCommandLineOption* theWrappedObject, QCommandLineOption&  other);
   QString  valueName(QCommandLineOption* theWrappedObject) const;
};





class PythonQtWrapper_QCommandLineParser : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptionsAfterPositionalArgumentsMode SingleDashWordOptionMode )
enum OptionsAfterPositionalArgumentsMode{
  ParseAsOptions = QCommandLineParser::ParseAsOptions,   ParseAsPositionalArguments = QCommandLineParser::ParseAsPositionalArguments};
enum SingleDashWordOptionMode{
  ParseAsCompactedShortOptions = QCommandLineParser::ParseAsCompactedShortOptions,   ParseAsLongOptions = QCommandLineParser::ParseAsLongOptions};
public slots:
QCommandLineParser* new_QCommandLineParser();
void delete_QCommandLineParser(QCommandLineParser* obj) { delete obj; }
   QCommandLineOption  addHelpOption(QCommandLineParser* theWrappedObject);
   bool  addOption(QCommandLineParser* theWrappedObject, const QCommandLineOption&  commandLineOption);
   bool  addOptions(QCommandLineParser* theWrappedObject, const QList<QCommandLineOption >&  options);
   void addPositionalArgument(QCommandLineParser* theWrappedObject, const QString&  name, const QString&  description, const QString&  syntax = QString());
   QCommandLineOption  addVersionOption(QCommandLineParser* theWrappedObject);
   QString  applicationDescription(QCommandLineParser* theWrappedObject) const;
   void clearPositionalArguments(QCommandLineParser* theWrappedObject);
   QString  errorText(QCommandLineParser* theWrappedObject) const;
   QString  helpText(QCommandLineParser* theWrappedObject) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  optionNames(QCommandLineParser* theWrappedObject) const;
   bool  parse(QCommandLineParser* theWrappedObject, const QStringList&  arguments);
   QStringList  positionalArguments(QCommandLineParser* theWrappedObject) const;
   void process(QCommandLineParser* theWrappedObject, const QCoreApplication&  app);
   void process(QCommandLineParser* theWrappedObject, const QStringList&  arguments);
   void setApplicationDescription(QCommandLineParser* theWrappedObject, const QString&  description);
   void setOptionsAfterPositionalArgumentsMode(QCommandLineParser* theWrappedObject, QCommandLineParser::OptionsAfterPositionalArgumentsMode  mode);
   void setSingleDashWordOptionMode(QCommandLineParser* theWrappedObject, QCommandLineParser::SingleDashWordOptionMode  parsingMode);
   void showHelp(QCommandLineParser* theWrappedObject, int  exitCode = 0);
   void showVersion(QCommandLineParser* theWrappedObject);
   QString  static_QCommandLineParser_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
   QStringList  unknownOptionNames(QCommandLineParser* theWrappedObject) const;
   QString  value(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QString  value(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QString&  name) const;
};





class PythonQtPublicPromoter_QCoreApplication : public QCoreApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void*  promoted_resolveInterface(const char*  name, int  revision) const { return this->resolveInterface(name, revision); }
inline bool  py_q_event(QEvent*  arg__1) { return QCoreApplication::event(arg__1); }
inline bool  py_q_notify(QObject*  arg__1, QEvent*  arg__2) { return QCoreApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QCoreApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  ApplicationFlags = QCoreApplication::ApplicationFlags};
public slots:
void delete_QCoreApplication(QCoreApplication* obj) { delete obj; }
   void static_QCoreApplication_addLibraryPath(const QString&  arg__1);
   QString  static_QCoreApplication_applicationDirPath();
   QString  static_QCoreApplication_applicationFilePath();
   QString  static_QCoreApplication_applicationName();
   qint64  static_QCoreApplication_applicationPid();
   QString  static_QCoreApplication_applicationVersion();
   QStringList  static_QCoreApplication_arguments();
   bool  static_QCoreApplication_closingDown();
   bool  py_q_event(QCoreApplication* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)->py_q_event(arg__1));}
   QAbstractEventDispatcher*  static_QCoreApplication_eventDispatcher();
   int  static_QCoreApplication_exec();
   bool  static_QCoreApplication_installTranslator(QTranslator*  messageFile);
   QCoreApplication*  static_QCoreApplication_instance();
   bool  static_QCoreApplication_isQuitLockEnabled();
   bool  static_QCoreApplication_isSetuidAllowed();
   QStringList  static_QCoreApplication_libraryPaths();
   bool  notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   bool  py_q_notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)->py_q_notify(arg__1, arg__2));}
   QString  static_QCoreApplication_organizationDomain();
   QString  static_QCoreApplication_organizationName();
   void static_QCoreApplication_postEvent(QObject*  receiver, PythonQtPassOwnershipToCPP<QEvent* >  event, int  priority = Qt::NormalEventPriority);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime);
   void static_QCoreApplication_removeLibraryPath(const QString&  arg__1);
   void static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType = 0);
   bool  static_QCoreApplication_removeTranslator(QTranslator*  messageFile);
   void*  resolveInterface(QCoreApplication* theWrappedObject, const char*  name, int  revision) const;
   bool  static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event);
   void static_QCoreApplication_sendPostedEvents(QObject*  receiver = nullptr, int  event_type = 0);
   void static_QCoreApplication_setApplicationName(const QString&  application);
   void static_QCoreApplication_setApplicationVersion(const QString&  version);
   void static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on = true);
   void static_QCoreApplication_setEventDispatcher(QAbstractEventDispatcher*  eventDispatcher);
   void static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1);
   void static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain);
   void static_QCoreApplication_setOrganizationName(const QString&  orgName);
   void static_QCoreApplication_setQuitLockEnabled(bool  enabled);
   void static_QCoreApplication_setSetuidAllowed(bool  allow);
   bool  static_QCoreApplication_startingUp();
   bool  static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute);
   QString  static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation = nullptr, int  n = -1);
};





class PythonQtWrapper_QCryptographicHash : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Algorithm )
enum Algorithm{
  Md4 = QCryptographicHash::Md4,   Md5 = QCryptographicHash::Md5,   Sha1 = QCryptographicHash::Sha1,   Sha224 = QCryptographicHash::Sha224,   Sha256 = QCryptographicHash::Sha256,   Sha384 = QCryptographicHash::Sha384,   Sha512 = QCryptographicHash::Sha512,   Keccak_224 = QCryptographicHash::Keccak_224,   Keccak_256 = QCryptographicHash::Keccak_256,   Keccak_384 = QCryptographicHash::Keccak_384,   Keccak_512 = QCryptographicHash::Keccak_512,   RealSha3_224 = QCryptographicHash::RealSha3_224,   RealSha3_256 = QCryptographicHash::RealSha3_256,   RealSha3_384 = QCryptographicHash::RealSha3_384,   RealSha3_512 = QCryptographicHash::RealSha3_512,   Sha3_224 = QCryptographicHash::Sha3_224,   Sha3_256 = QCryptographicHash::Sha3_256,   Sha3_384 = QCryptographicHash::Sha3_384,   Sha3_512 = QCryptographicHash::Sha3_512,   Blake2b_160 = QCryptographicHash::Blake2b_160,   Blake2b_256 = QCryptographicHash::Blake2b_256,   Blake2b_384 = QCryptographicHash::Blake2b_384,   Blake2b_512 = QCryptographicHash::Blake2b_512,   Blake2s_128 = QCryptographicHash::Blake2s_128,   Blake2s_160 = QCryptographicHash::Blake2s_160,   Blake2s_224 = QCryptographicHash::Blake2s_224,   Blake2s_256 = QCryptographicHash::Blake2s_256,   NumAlgorithms = QCryptographicHash::NumAlgorithms};
public slots:
QCryptographicHash* new_QCryptographicHash(QCryptographicHash::Algorithm  method);
void delete_QCryptographicHash(QCryptographicHash* obj) { delete obj; }
   bool  addData(QCryptographicHash* theWrappedObject, QIODevice*  device);
   void addData(QCryptographicHash* theWrappedObject, const char*  data, qsizetype  length);
   QCryptographicHash::Algorithm  algorithm(QCryptographicHash* theWrappedObject) const;
   int  static_QCryptographicHash_hashLength(QCryptographicHash::Algorithm  method);
   void reset(QCryptographicHash* theWrappedObject);
   QByteArray  result(QCryptographicHash* theWrappedObject) const;
   bool  static_QCryptographicHash_supportsAlgorithm(QCryptographicHash::Algorithm  method);
   void swap(QCryptographicHash* theWrappedObject, QCryptographicHash&  other);
};





class PythonQtWrapper_QDataStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ByteOrder FloatingPointPrecision Status Version )
enum ByteOrder{
  BigEndian = QDataStream::BigEndian,   LittleEndian = QDataStream::LittleEndian};
enum FloatingPointPrecision{
  SinglePrecision = QDataStream::SinglePrecision,   DoublePrecision = QDataStream::DoublePrecision};
enum Status{
  Ok = QDataStream::Ok,   ReadPastEnd = QDataStream::ReadPastEnd,   ReadCorruptData = QDataStream::ReadCorruptData,   WriteFailed = QDataStream::WriteFailed};
enum Version{
  Qt_1_0 = QDataStream::Qt_1_0,   Qt_2_0 = QDataStream::Qt_2_0,   Qt_2_1 = QDataStream::Qt_2_1,   Qt_3_0 = QDataStream::Qt_3_0,   Qt_3_1 = QDataStream::Qt_3_1,   Qt_3_3 = QDataStream::Qt_3_3,   Qt_4_0 = QDataStream::Qt_4_0,   Qt_4_1 = QDataStream::Qt_4_1,   Qt_4_2 = QDataStream::Qt_4_2,   Qt_4_3 = QDataStream::Qt_4_3,   Qt_4_4 = QDataStream::Qt_4_4,   Qt_4_5 = QDataStream::Qt_4_5,   Qt_4_6 = QDataStream::Qt_4_6,   Qt_4_7 = QDataStream::Qt_4_7,   Qt_4_8 = QDataStream::Qt_4_8,   Qt_4_9 = QDataStream::Qt_4_9,   Qt_5_0 = QDataStream::Qt_5_0,   Qt_5_1 = QDataStream::Qt_5_1,   Qt_5_2 = QDataStream::Qt_5_2,   Qt_5_3 = QDataStream::Qt_5_3,   Qt_5_4 = QDataStream::Qt_5_4,   Qt_5_5 = QDataStream::Qt_5_5,   Qt_5_6 = QDataStream::Qt_5_6,   Qt_5_7 = QDataStream::Qt_5_7,   Qt_5_8 = QDataStream::Qt_5_8,   Qt_5_9 = QDataStream::Qt_5_9,   Qt_5_10 = QDataStream::Qt_5_10,   Qt_5_11 = QDataStream::Qt_5_11,   Qt_5_12 = QDataStream::Qt_5_12,   Qt_5_13 = QDataStream::Qt_5_13,   Qt_5_14 = QDataStream::Qt_5_14,   Qt_5_15 = QDataStream::Qt_5_15,   Qt_6_0 = QDataStream::Qt_6_0,   Qt_6_1 = QDataStream::Qt_6_1,   Qt_6_2 = QDataStream::Qt_6_2,   Qt_6_3 = QDataStream::Qt_6_3,   Qt_6_4 = QDataStream::Qt_6_4,   Qt_6_5 = QDataStream::Qt_6_5,   Qt_DefaultCompiledVersion = QDataStream::Qt_DefaultCompiledVersion};
public slots:
QDataStream* new_QDataStream();
QDataStream* new_QDataStream(QByteArray*  arg__1, QIODeviceBase::OpenMode  flags);
QDataStream* new_QDataStream(QIODevice*  arg__1);
QDataStream* new_QDataStream(const QByteArray&  arg__1);
void delete_QDataStream(QDataStream* obj) { delete obj; }
   void abortTransaction(QDataStream* theWrappedObject);
   bool  atEnd(QDataStream* theWrappedObject) const;
   QDataStream::ByteOrder  byteOrder(QDataStream* theWrappedObject) const;
   bool  commitTransaction(QDataStream* theWrappedObject);
   QIODevice*  device(QDataStream* theWrappedObject) const;
   QDataStream::FloatingPointPrecision  floatingPointPrecision(QDataStream* theWrappedObject) const;
   bool  isDeviceTransactionStarted(QDataStream* theWrappedObject) const;
   QDataStream*  __lshift__(QDataStream* theWrappedObject, char  i);
   QDataStream*  __rshift__(QDataStream* theWrappedObject, char&  i);
   void resetStatus(QDataStream* theWrappedObject);
   void rollbackTransaction(QDataStream* theWrappedObject);
   void setByteOrder(QDataStream* theWrappedObject, QDataStream::ByteOrder  arg__1);
   void setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1);
   void setFloatingPointPrecision(QDataStream* theWrappedObject, QDataStream::FloatingPointPrecision  precision);
   void setStatus(QDataStream* theWrappedObject, QDataStream::Status  status);
   void setVersion(QDataStream* theWrappedObject, int  arg__1);
   int  skipRawData(QDataStream* theWrappedObject, int  len);
   void startTransaction(QDataStream* theWrappedObject);
   QDataStream::Status  status(QDataStream* theWrappedObject) const;
   int  version(QDataStream* theWrappedObject) const;

   QString readQString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QString readString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QChar readQChar(QDataStream* d) { QChar r; (*d) >> r; return r; }
   QStringList readQStringList(QDataStream* d) { QStringList r; (*d) >> r; return r; }
   QVariant readQVariant(QDataStream* d) { QVariant r; (*d) >> r; return r; }
   bool readBool(QDataStream* d) { bool r; (*d) >> r; return r; }
   qint8 readInt8(QDataStream* d) { qint8 r; (*d) >> r; return r; }
   quint8 readUInt8(QDataStream* d) { quint8 r; (*d) >> r; return r; }
   qint16 readInt16(QDataStream* d) { qint16 r; (*d) >> r; return r; }
   quint16 readUInt16(QDataStream* d) { quint16 r; (*d) >> r; return r; }
   qint32 readInt32(QDataStream* d) { qint32 r; (*d) >> r; return r; }
   quint32 readUInt32(QDataStream* d) { quint32 r; (*d) >> r; return r; }
   qint64 readInt64(QDataStream* d) { qint64 r; (*d) >> r; return r; }
   quint64 readUInt64(QDataStream* d) { quint64 r; (*d) >> r; return r; }
   float readFloat(QDataStream* d) { float r; (*d) >> r; return r; }
   double readDouble(QDataStream* d) { double r; (*d) >> r; return r; }

   void writeQString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeQChar(QDataStream* d, const QChar& v) { (*d) << v; }
   void writeQStringList(QDataStream* d, const QStringList& v) { (*d) << v; }
   void writeQVariant(QDataStream* d, const QVariant& v) { (*d) << v; }
   void writeBool(QDataStream* d, bool v) { (*d) << v; }
   void writeInt8(QDataStream* d, qint8 v) { (*d) << v; }
   void writeUInt8(QDataStream* d, quint8 v) { (*d) << v; }
   void writeInt16(QDataStream* d, qint16 v) { (*d) << v; }
   void writeUInt16(QDataStream* d, quint16 v) { (*d) << v; }
   void writeInt32(QDataStream* d, qint32 v) { (*d) << v; }
   void writeUInt32(QDataStream* d, quint32 v) { (*d) << v; }
   void writeInt64(QDataStream* d, qint64 v) { (*d) << v; }
   void writeUInt64(QDataStream* d, quint64 v) { (*d) << v; }
   void writeFloat(QDataStream* d, float v) { (*d) << v; }
   void writeDouble(QDataStream* d, double v) { (*d) << v; }

   int writeRawData(QDataStream* d, PyObject* o) {
     bool ok;
     QByteArray r = PythonQtConv::PyObjGetBytes(o, false, ok);
     return (*d).writeRawData(r.constData(), r.size());
   }

   PyObject* readRawData(QDataStream* d, int len) {
     QByteArray r;
     r.resize(len);
     int result = d->readRawData(r.data(), r.size());
     if (result>=0) {
       return PyBytes_FromStringAndSize(r.data(), result);
     } else {
       Py_INCREF(Py_None);
       return Py_None;
     }
   }
    
};





class PythonQtWrapper_QDeadlineTimer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ForeverConstant )
enum ForeverConstant{
  Forever = QDeadlineTimer::Forever};
public slots:
QDeadlineTimer* new_QDeadlineTimer(QDeadlineTimer::ForeverConstant  arg__1, Qt::TimerType  type_ = Qt::CoarseTimer);
QDeadlineTimer* new_QDeadlineTimer(Qt::TimerType  type_ = Qt::CoarseTimer);
QDeadlineTimer* new_QDeadlineTimer(qint64  msecs, Qt::TimerType  type = Qt::CoarseTimer);
void delete_QDeadlineTimer(QDeadlineTimer* obj) { delete obj; }
   QDeadlineTimer  static_QDeadlineTimer_addNSecs(QDeadlineTimer  dt, qint64  nsecs);
   QDeadlineTimer  static_QDeadlineTimer_current(Qt::TimerType  timerType = Qt::CoarseTimer);
   qint64  deadline(QDeadlineTimer* theWrappedObject) const;
   qint64  deadlineNSecs(QDeadlineTimer* theWrappedObject) const;
   bool  hasExpired(QDeadlineTimer* theWrappedObject) const;
   bool  isForever(QDeadlineTimer* theWrappedObject) const;
   bool  __ne__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   QDeadlineTimer*  __iadd__(QDeadlineTimer* theWrappedObject, qint64  msecs);
   qint64  __sub__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  dt2);
   QDeadlineTimer  __sub__(QDeadlineTimer* theWrappedObject, qint64  msecs);
   QDeadlineTimer*  __isub__(QDeadlineTimer* theWrappedObject, qint64  msecs);
   bool  __lt__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   bool  __le__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   bool  __eq__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   bool  __gt__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   bool  __ge__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   qint64  remainingTime(QDeadlineTimer* theWrappedObject) const;
   qint64  remainingTimeNSecs(QDeadlineTimer* theWrappedObject) const;
   void setDeadline(QDeadlineTimer* theWrappedObject, qint64  msecs, Qt::TimerType  timerType = Qt::CoarseTimer);
   void setPreciseDeadline(QDeadlineTimer* theWrappedObject, qint64  secs, qint64  nsecs = 0, Qt::TimerType  type = Qt::CoarseTimer);
   void setPreciseRemainingTime(QDeadlineTimer* theWrappedObject, qint64  secs, qint64  nsecs = 0, Qt::TimerType  type = Qt::CoarseTimer);
   void setRemainingTime(QDeadlineTimer* theWrappedObject, qint64  msecs, Qt::TimerType  type = Qt::CoarseTimer);
   void setTimerType(QDeadlineTimer* theWrappedObject, Qt::TimerType  type);
   void swap(QDeadlineTimer* theWrappedObject, QDeadlineTimer&  other);
   Qt::TimerType  timerType(QDeadlineTimer* theWrappedObject) const;
};





class PythonQtShell_QDeferredDeleteEvent : public QDeferredDeleteEvent
{
public:
    PythonQtShell_QDeferredDeleteEvent():QDeferredDeleteEvent(),_wrapper(nullptr) {};
    PythonQtShell_QDeferredDeleteEvent(const QDeferredDeleteEvent&  arg__1):QDeferredDeleteEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QDeferredDeleteEvent() override;

QDeferredDeleteEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDeferredDeleteEvent : public QDeferredDeleteEvent
{ public:
inline QDeferredDeleteEvent&  promoted_operator_assign(const QDeferredDeleteEvent&  other) { return this->operator=(other); }
inline QDeferredDeleteEvent*  py_q_clone() const { return QDeferredDeleteEvent::clone(); }
};

class PythonQtWrapper_QDeferredDeleteEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDeferredDeleteEvent* new_QDeferredDeleteEvent();
QDeferredDeleteEvent* new_QDeferredDeleteEvent(const QDeferredDeleteEvent&  arg__1);
void delete_QDeferredDeleteEvent(QDeferredDeleteEvent* obj) { delete obj; }
   QDeferredDeleteEvent*  py_q_clone(QDeferredDeleteEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDeferredDeleteEvent*)theWrappedObject)->py_q_clone());}
   int  loopLevel(QDeferredDeleteEvent* theWrappedObject) const;
   QDeferredDeleteEvent*  operator_assign(QDeferredDeleteEvent* theWrappedObject, const QDeferredDeleteEvent&  other);
};





class PythonQtWrapper_QDir : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Filter SortFlag )
Q_FLAGS(Filters SortFlags )
enum Filter{
  Dirs = QDir::Dirs,   Files = QDir::Files,   Drives = QDir::Drives,   NoSymLinks = QDir::NoSymLinks,   AllEntries = QDir::AllEntries,   TypeMask = QDir::TypeMask,   Readable = QDir::Readable,   Writable = QDir::Writable,   Executable = QDir::Executable,   PermissionMask = QDir::PermissionMask,   Modified = QDir::Modified,   Hidden = QDir::Hidden,   System = QDir::System,   AccessMask = QDir::AccessMask,   AllDirs = QDir::AllDirs,   CaseSensitive = QDir::CaseSensitive,   NoDot = QDir::NoDot,   NoDotDot = QDir::NoDotDot,   NoDotAndDotDot = QDir::NoDotAndDotDot,   NoFilter = QDir::NoFilter};
enum SortFlag{
  Name = QDir::Name,   Time = QDir::Time,   Size = QDir::Size,   Unsorted = QDir::Unsorted,   SortByMask = QDir::SortByMask,   DirsFirst = QDir::DirsFirst,   Reversed = QDir::Reversed,   IgnoreCase = QDir::IgnoreCase,   DirsLast = QDir::DirsLast,   LocaleAware = QDir::LocaleAware,   Type = QDir::Type,   NoSort = QDir::NoSort};
Q_DECLARE_FLAGS(Filters, Filter)
Q_DECLARE_FLAGS(SortFlags, SortFlag)
public slots:
QDir* new_QDir(const QDir&  arg__1);
QDir* new_QDir(const QString&  path = QString());
QDir* new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort = QDir::SortFlags(Name | IgnoreCase), QDir::Filters  filter = QDir::AllEntries);
void delete_QDir(QDir* obj) { delete obj; }
   QString  absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   QString  absolutePath(QDir* theWrappedObject) const;
   void static_QDir_addSearchPath(const QString&  prefix, const QString&  path);
   QString  canonicalPath(QDir* theWrappedObject) const;
   bool  cd(QDir* theWrappedObject, const QString&  dirName);
   bool  cdUp(QDir* theWrappedObject);
   QString  static_QDir_cleanPath(const QString&  path);
   QDir  static_QDir_current();
   QString  static_QDir_currentPath();
   QString  dirName(QDir* theWrappedObject) const;
   QList<QFileInfo >  static_QDir_drives();
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  entryList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   bool  exists(QDir* theWrappedObject) const;
   bool  exists(QDir* theWrappedObject, const QString&  name) const;
   QString  filePath(QDir* theWrappedObject, const QString&  fileName) const;
   QDir::Filters  filter(QDir* theWrappedObject) const;
   QString  static_QDir_fromNativeSeparators(const QString&  pathName);
   QDir  static_QDir_home();
   QString  static_QDir_homePath();
   bool  isAbsolute(QDir* theWrappedObject) const;
   bool  static_QDir_isAbsolutePath(const QString&  path);
   bool  isEmpty(QDir* theWrappedObject, QDir::Filters  filters = QDir::Filters(AllEntries | NoDotAndDotDot)) const;
   bool  isReadable(QDir* theWrappedObject) const;
   bool  isRelative(QDir* theWrappedObject) const;
   bool  static_QDir_isRelativePath(const QString&  path);
   bool  isRoot(QDir* theWrappedObject) const;
   QChar  static_QDir_listSeparator();
   bool  makeAbsolute(QDir* theWrappedObject);
   bool  static_QDir_match(const QString&  filter, const QString&  fileName);
   bool  static_QDir_match(const QStringList&  filters, const QString&  fileName);
   bool  mkdir(QDir* theWrappedObject, const QString&  dirName) const;
   bool  mkdir(QDir* theWrappedObject, const QString&  dirName, QFile::Permissions  permissions) const;
   bool  mkpath(QDir* theWrappedObject, const QString&  dirPath) const;
   QStringList  nameFilters(QDir* theWrappedObject) const;
   QStringList  static_QDir_nameFiltersFromString(const QString&  nameFilter);
   bool  __ne__(QDir* theWrappedObject, const QDir&  dir) const;
   bool  __eq__(QDir* theWrappedObject, const QDir&  dir) const;
   QString  operator_subscript(QDir* theWrappedObject, qsizetype  arg__1) const;
   QString  path(QDir* theWrappedObject) const;
   void refresh(QDir* theWrappedObject) const;
   QString  relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   bool  remove(QDir* theWrappedObject, const QString&  fileName);
   bool  removeRecursively(QDir* theWrappedObject);
   bool  rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName);
   bool  rmdir(QDir* theWrappedObject, const QString&  dirName) const;
   bool  rmpath(QDir* theWrappedObject, const QString&  dirPath) const;
   QDir  static_QDir_root();
   QString  static_QDir_rootPath();
   QStringList  static_QDir_searchPaths(const QString&  prefix);
   QChar  static_QDir_separator();
   bool  static_QDir_setCurrent(const QString&  path);
   void setFilter(QDir* theWrappedObject, QDir::Filters  filter);
   void setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters);
   void setPath(QDir* theWrappedObject, const QString&  path);
   void static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths);
   void setSorting(QDir* theWrappedObject, QDir::SortFlags  sort);
   QDir::SortFlags  sorting(QDir* theWrappedObject) const;
   void swap(QDir* theWrappedObject, QDir&  other);
   QDir  static_QDir_temp();
   QString  static_QDir_tempPath();
   QString  static_QDir_toNativeSeparators(const QString&  pathName);
    QString py_toString(QDir*);
    bool __nonzero__(QDir* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QDirIterator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IteratorFlag )
Q_FLAGS(IteratorFlags )
enum IteratorFlag{
  NoIteratorFlags = QDirIterator::NoIteratorFlags,   FollowSymlinks = QDirIterator::FollowSymlinks,   Subdirectories = QDirIterator::Subdirectories};
Q_DECLARE_FLAGS(IteratorFlags, IteratorFlag)
public slots:
QDirIterator* new_QDirIterator(const QDir&  dir, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDir::Filters  filter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
void delete_QDirIterator(QDirIterator* obj) { delete obj; }
   QFileInfo  fileInfo(QDirIterator* theWrappedObject) const;
   QString  fileName(QDirIterator* theWrappedObject) const;
   QString  filePath(QDirIterator* theWrappedObject) const;
   bool  hasNext(QDirIterator* theWrappedObject) const;
   QString  next(QDirIterator* theWrappedObject);
   QFileInfo  nextFileInfo(QDirIterator* theWrappedObject);
   QString  path(QDirIterator* theWrappedObject) const;
};





class PythonQtShell_QDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent
{
public:
    PythonQtShell_QDynamicPropertyChangeEvent(const QByteArray&  name):QDynamicPropertyChangeEvent(name),_wrapper(nullptr) {};
    PythonQtShell_QDynamicPropertyChangeEvent(const QDynamicPropertyChangeEvent&  arg__1):QDynamicPropertyChangeEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QDynamicPropertyChangeEvent() override;

QDynamicPropertyChangeEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent
{ public:
inline QDynamicPropertyChangeEvent&  promoted_operator_assign(const QDynamicPropertyChangeEvent&  other) { return this->operator=(other); }
inline QDynamicPropertyChangeEvent*  py_q_clone() const { return QDynamicPropertyChangeEvent::clone(); }
};

class PythonQtWrapper_QDynamicPropertyChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QByteArray&  name);
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QDynamicPropertyChangeEvent&  arg__1);
void delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent* obj) { delete obj; }
   QDynamicPropertyChangeEvent*  py_q_clone(QDynamicPropertyChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDynamicPropertyChangeEvent*)theWrappedObject)->py_q_clone());}
   QDynamicPropertyChangeEvent*  operator_assign(QDynamicPropertyChangeEvent* theWrappedObject, const QDynamicPropertyChangeEvent&  other);
   QByteArray  propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const;
};





class PythonQtWrapper_QEasingCurve : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Linear = QEasingCurve::Linear,   InQuad = QEasingCurve::InQuad,   OutQuad = QEasingCurve::OutQuad,   InOutQuad = QEasingCurve::InOutQuad,   OutInQuad = QEasingCurve::OutInQuad,   InCubic = QEasingCurve::InCubic,   OutCubic = QEasingCurve::OutCubic,   InOutCubic = QEasingCurve::InOutCubic,   OutInCubic = QEasingCurve::OutInCubic,   InQuart = QEasingCurve::InQuart,   OutQuart = QEasingCurve::OutQuart,   InOutQuart = QEasingCurve::InOutQuart,   OutInQuart = QEasingCurve::OutInQuart,   InQuint = QEasingCurve::InQuint,   OutQuint = QEasingCurve::OutQuint,   InOutQuint = QEasingCurve::InOutQuint,   OutInQuint = QEasingCurve::OutInQuint,   InSine = QEasingCurve::InSine,   OutSine = QEasingCurve::OutSine,   InOutSine = QEasingCurve::InOutSine,   OutInSine = QEasingCurve::OutInSine,   InExpo = QEasingCurve::InExpo,   OutExpo = QEasingCurve::OutExpo,   InOutExpo = QEasingCurve::InOutExpo,   OutInExpo = QEasingCurve::OutInExpo,   InCirc = QEasingCurve::InCirc,   OutCirc = QEasingCurve::OutCirc,   InOutCirc = QEasingCurve::InOutCirc,   OutInCirc = QEasingCurve::OutInCirc,   InElastic = QEasingCurve::InElastic,   OutElastic = QEasingCurve::OutElastic,   InOutElastic = QEasingCurve::InOutElastic,   OutInElastic = QEasingCurve::OutInElastic,   InBack = QEasingCurve::InBack,   OutBack = QEasingCurve::OutBack,   InOutBack = QEasingCurve::InOutBack,   OutInBack = QEasingCurve::OutInBack,   InBounce = QEasingCurve::InBounce,   OutBounce = QEasingCurve::OutBounce,   InOutBounce = QEasingCurve::InOutBounce,   OutInBounce = QEasingCurve::OutInBounce,   InCurve = QEasingCurve::InCurve,   OutCurve = QEasingCurve::OutCurve,   SineCurve = QEasingCurve::SineCurve,   CosineCurve = QEasingCurve::CosineCurve,   BezierSpline = QEasingCurve::BezierSpline,   TCBSpline = QEasingCurve::TCBSpline,   Custom = QEasingCurve::Custom,   NCurveTypes = QEasingCurve::NCurveTypes};
public slots:
QEasingCurve* new_QEasingCurve(QEasingCurve::Type  type = QEasingCurve::Linear);
QEasingCurve* new_QEasingCurve(const QEasingCurve&  other);
void delete_QEasingCurve(QEasingCurve* obj) { delete obj; }
   void addCubicBezierSegment(QEasingCurve* theWrappedObject, const QPointF&  c1, const QPointF&  c2, const QPointF&  endPoint);
   void addTCBSegment(QEasingCurve* theWrappedObject, const QPointF&  nextPoint, qreal  t, qreal  c, qreal  b);
   qreal  amplitude(QEasingCurve* theWrappedObject) const;
   bool  __ne__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const;
   void writeTo(QEasingCurve* theWrappedObject, QDataStream&  arg__1);
   QEasingCurve*  operator_assign(QEasingCurve* theWrappedObject, const QEasingCurve&  other);
   bool  __eq__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const;
   void readFrom(QEasingCurve* theWrappedObject, QDataStream&  arg__1);
   qreal  overshoot(QEasingCurve* theWrappedObject) const;
   qreal  period(QEasingCurve* theWrappedObject) const;
   void setAmplitude(QEasingCurve* theWrappedObject, qreal  amplitude);
   void setOvershoot(QEasingCurve* theWrappedObject, qreal  overshoot);
   void setPeriod(QEasingCurve* theWrappedObject, qreal  period);
   void setType(QEasingCurve* theWrappedObject, QEasingCurve::Type  type);
   void swap(QEasingCurve* theWrappedObject, QEasingCurve&  other);
   QList<QPointF >  toCubicSpline(QEasingCurve* theWrappedObject) const;
   QEasingCurve::Type  type(QEasingCurve* theWrappedObject) const;
   qreal  valueForProgress(QEasingCurve* theWrappedObject, qreal  progress) const;
    QString py_toString(QEasingCurve*);
};





class PythonQtWrapper_QElapsedTimer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ClockType )
enum ClockType{
  SystemTime = QElapsedTimer::SystemTime,   MonotonicClock = QElapsedTimer::MonotonicClock,   TickCounter = QElapsedTimer::TickCounter,   MachAbsoluteTime = QElapsedTimer::MachAbsoluteTime,   PerformanceCounter = QElapsedTimer::PerformanceCounter};
public slots:
QElapsedTimer* new_QElapsedTimer();
void delete_QElapsedTimer(QElapsedTimer* obj) { delete obj; }
   QElapsedTimer::ClockType  static_QElapsedTimer_clockType();
   qint64  elapsed(QElapsedTimer* theWrappedObject) const;
   bool  hasExpired(QElapsedTimer* theWrappedObject, qint64  timeout) const;
   void invalidate(QElapsedTimer* theWrappedObject);
   bool  static_QElapsedTimer_isMonotonic();
   bool  isValid(QElapsedTimer* theWrappedObject) const;
   qint64  msecsSinceReference(QElapsedTimer* theWrappedObject) const;
   qint64  msecsTo(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   qint64  nsecsElapsed(QElapsedTimer* theWrappedObject) const;
   bool  __ne__(QElapsedTimer* theWrappedObject, const QElapsedTimer&  rhs);
   bool  __eq__(QElapsedTimer* theWrappedObject, const QElapsedTimer&  rhs);
   qint64  restart(QElapsedTimer* theWrappedObject);
   qint64  secsTo(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   void start(QElapsedTimer* theWrappedObject);
    bool __nonzero__(QElapsedTimer* obj) { return obj->isValid(); }
};





class PythonQtShell_QEvent : public QEvent
{
public:
    PythonQtShell_QEvent(QEvent::Type  type):QEvent(type),_wrapper(nullptr) {};
    PythonQtShell_QEvent(const QEvent&  arg__1):QEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QEvent : public QEvent
{ public:
inline QEvent&  promoted_operator_assign(const QEvent&  other) { return this->operator=(other); }
inline QEvent*  py_q_clone() const { return QEvent::clone(); }
inline void py_q_setAccepted(bool  accepted) { QEvent::setAccepted(accepted); }
};

class PythonQtWrapper_QEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  None = QEvent::None,   Timer = QEvent::Timer,   MouseButtonPress = QEvent::MouseButtonPress,   MouseButtonRelease = QEvent::MouseButtonRelease,   MouseButtonDblClick = QEvent::MouseButtonDblClick,   MouseMove = QEvent::MouseMove,   KeyPress = QEvent::KeyPress,   KeyRelease = QEvent::KeyRelease,   FocusIn = QEvent::FocusIn,   FocusOut = QEvent::FocusOut,   FocusAboutToChange = QEvent::FocusAboutToChange,   Enter = QEvent::Enter,   Leave = QEvent::Leave,   Paint = QEvent::Paint,   Move = QEvent::Move,   Resize = QEvent::Resize,   Create = QEvent::Create,   Destroy = QEvent::Destroy,   Show = QEvent::Show,   Hide = QEvent::Hide,   Close = QEvent::Close,   Quit = QEvent::Quit,   ParentChange = QEvent::ParentChange,   ParentAboutToChange = QEvent::ParentAboutToChange,   ThreadChange = QEvent::ThreadChange,   WindowActivate = QEvent::WindowActivate,   WindowDeactivate = QEvent::WindowDeactivate,   ShowToParent = QEvent::ShowToParent,   HideToParent = QEvent::HideToParent,   Wheel = QEvent::Wheel,   WindowTitleChange = QEvent::WindowTitleChange,   WindowIconChange = QEvent::WindowIconChange,   ApplicationWindowIconChange = QEvent::ApplicationWindowIconChange,   ApplicationFontChange = QEvent::ApplicationFontChange,   ApplicationLayoutDirectionChange = QEvent::ApplicationLayoutDirectionChange,   ApplicationPaletteChange = QEvent::ApplicationPaletteChange,   PaletteChange = QEvent::PaletteChange,   Clipboard = QEvent::Clipboard,   Speech = QEvent::Speech,   MetaCall = QEvent::MetaCall,   SockAct = QEvent::SockAct,   WinEventAct = QEvent::WinEventAct,   DeferredDelete = QEvent::DeferredDelete,   DragEnter = QEvent::DragEnter,   DragMove = QEvent::DragMove,   DragLeave = QEvent::DragLeave,   Drop = QEvent::Drop,   DragResponse = QEvent::DragResponse,   ChildAdded = QEvent::ChildAdded,   ChildPolished = QEvent::ChildPolished,   ChildRemoved = QEvent::ChildRemoved,   ShowWindowRequest = QEvent::ShowWindowRequest,   PolishRequest = QEvent::PolishRequest,   Polish = QEvent::Polish,   LayoutRequest = QEvent::LayoutRequest,   UpdateRequest = QEvent::UpdateRequest,   UpdateLater = QEvent::UpdateLater,   EmbeddingControl = QEvent::EmbeddingControl,   ActivateControl = QEvent::ActivateControl,   DeactivateControl = QEvent::DeactivateControl,   ContextMenu = QEvent::ContextMenu,   InputMethod = QEvent::InputMethod,   TabletMove = QEvent::TabletMove,   LocaleChange = QEvent::LocaleChange,   LanguageChange = QEvent::LanguageChange,   LayoutDirectionChange = QEvent::LayoutDirectionChange,   Style = QEvent::Style,   TabletPress = QEvent::TabletPress,   TabletRelease = QEvent::TabletRelease,   OkRequest = QEvent::OkRequest,   HelpRequest = QEvent::HelpRequest,   IconDrag = QEvent::IconDrag,   FontChange = QEvent::FontChange,   EnabledChange = QEvent::EnabledChange,   ActivationChange = QEvent::ActivationChange,   StyleChange = QEvent::StyleChange,   IconTextChange = QEvent::IconTextChange,   ModifiedChange = QEvent::ModifiedChange,   MouseTrackingChange = QEvent::MouseTrackingChange,   WindowBlocked = QEvent::WindowBlocked,   WindowUnblocked = QEvent::WindowUnblocked,   WindowStateChange = QEvent::WindowStateChange,   ReadOnlyChange = QEvent::ReadOnlyChange,   ToolTip = QEvent::ToolTip,   WhatsThis = QEvent::WhatsThis,   StatusTip = QEvent::StatusTip,   ActionChanged = QEvent::ActionChanged,   ActionAdded = QEvent::ActionAdded,   ActionRemoved = QEvent::ActionRemoved,   FileOpen = QEvent::FileOpen,   Shortcut = QEvent::Shortcut,   ShortcutOverride = QEvent::ShortcutOverride,   WhatsThisClicked = QEvent::WhatsThisClicked,   ToolBarChange = QEvent::ToolBarChange,   ApplicationActivate = QEvent::ApplicationActivate,   ApplicationActivated = QEvent::ApplicationActivated,   ApplicationDeactivate = QEvent::ApplicationDeactivate,   ApplicationDeactivated = QEvent::ApplicationDeactivated,   QueryWhatsThis = QEvent::QueryWhatsThis,   EnterWhatsThisMode = QEvent::EnterWhatsThisMode,   LeaveWhatsThisMode = QEvent::LeaveWhatsThisMode,   ZOrderChange = QEvent::ZOrderChange,   HoverEnter = QEvent::HoverEnter,   HoverLeave = QEvent::HoverLeave,   HoverMove = QEvent::HoverMove,   AcceptDropsChange = QEvent::AcceptDropsChange,   ZeroTimerEvent = QEvent::ZeroTimerEvent,   GraphicsSceneMouseMove = QEvent::GraphicsSceneMouseMove,   GraphicsSceneMousePress = QEvent::GraphicsSceneMousePress,   GraphicsSceneMouseRelease = QEvent::GraphicsSceneMouseRelease,   GraphicsSceneMouseDoubleClick = QEvent::GraphicsSceneMouseDoubleClick,   GraphicsSceneContextMenu = QEvent::GraphicsSceneContextMenu,   GraphicsSceneHoverEnter = QEvent::GraphicsSceneHoverEnter,   GraphicsSceneHoverMove = QEvent::GraphicsSceneHoverMove,   GraphicsSceneHoverLeave = QEvent::GraphicsSceneHoverLeave,   GraphicsSceneHelp = QEvent::GraphicsSceneHelp,   GraphicsSceneDragEnter = QEvent::GraphicsSceneDragEnter,   GraphicsSceneDragMove = QEvent::GraphicsSceneDragMove,   GraphicsSceneDragLeave = QEvent::GraphicsSceneDragLeave,   GraphicsSceneDrop = QEvent::GraphicsSceneDrop,   GraphicsSceneWheel = QEvent::GraphicsSceneWheel,   GraphicsSceneLeave = QEvent::GraphicsSceneLeave,   KeyboardLayoutChange = QEvent::KeyboardLayoutChange,   DynamicPropertyChange = QEvent::DynamicPropertyChange,   TabletEnterProximity = QEvent::TabletEnterProximity,   TabletLeaveProximity = QEvent::TabletLeaveProximity,   NonClientAreaMouseMove = QEvent::NonClientAreaMouseMove,   NonClientAreaMouseButtonPress = QEvent::NonClientAreaMouseButtonPress,   NonClientAreaMouseButtonRelease = QEvent::NonClientAreaMouseButtonRelease,   NonClientAreaMouseButtonDblClick = QEvent::NonClientAreaMouseButtonDblClick,   MacSizeChange = QEvent::MacSizeChange,   ContentsRectChange = QEvent::ContentsRectChange,   MacGLWindowChange = QEvent::MacGLWindowChange,   FutureCallOut = QEvent::FutureCallOut,   GraphicsSceneResize = QEvent::GraphicsSceneResize,   GraphicsSceneMove = QEvent::GraphicsSceneMove,   CursorChange = QEvent::CursorChange,   ToolTipChange = QEvent::ToolTipChange,   NetworkReplyUpdated = QEvent::NetworkReplyUpdated,   GrabMouse = QEvent::GrabMouse,   UngrabMouse = QEvent::UngrabMouse,   GrabKeyboard = QEvent::GrabKeyboard,   UngrabKeyboard = QEvent::UngrabKeyboard,   StateMachineSignal = QEvent::StateMachineSignal,   StateMachineWrapped = QEvent::StateMachineWrapped,   TouchBegin = QEvent::TouchBegin,   TouchUpdate = QEvent::TouchUpdate,   TouchEnd = QEvent::TouchEnd,   NativeGesture = QEvent::NativeGesture,   RequestSoftwareInputPanel = QEvent::RequestSoftwareInputPanel,   CloseSoftwareInputPanel = QEvent::CloseSoftwareInputPanel,   WinIdChange = QEvent::WinIdChange,   Gesture = QEvent::Gesture,   GestureOverride = QEvent::GestureOverride,   ScrollPrepare = QEvent::ScrollPrepare,   Scroll = QEvent::Scroll,   Expose = QEvent::Expose,   InputMethodQuery = QEvent::InputMethodQuery,   OrientationChange = QEvent::OrientationChange,   TouchCancel = QEvent::TouchCancel,   ThemeChange = QEvent::ThemeChange,   SockClose = QEvent::SockClose,   PlatformPanel = QEvent::PlatformPanel,   StyleAnimationUpdate = QEvent::StyleAnimationUpdate,   ApplicationStateChange = QEvent::ApplicationStateChange,   WindowChangeInternal = QEvent::WindowChangeInternal,   ScreenChangeInternal = QEvent::ScreenChangeInternal,   PlatformSurface = QEvent::PlatformSurface,   Pointer = QEvent::Pointer,   TabletTrackingChange = QEvent::TabletTrackingChange,   WindowAboutToChangeInternal = QEvent::WindowAboutToChangeInternal,   User = QEvent::User,   MaxUser = QEvent::MaxUser};
public slots:
QEvent* new_QEvent(QEvent::Type  type);
QEvent* new_QEvent(const QEvent&  arg__1);
void delete_QEvent(QEvent* obj) { delete obj; }
   void accept(QEvent* theWrappedObject);
   QEvent*  clone(QEvent* theWrappedObject) const;
   QEvent*  py_q_clone(QEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QEvent*)theWrappedObject)->py_q_clone());}
   void ignore(QEvent* theWrappedObject);
   bool  isAccepted(QEvent* theWrappedObject) const;
   bool  isInputEvent(QEvent* theWrappedObject) const;
   bool  isPointerEvent(QEvent* theWrappedObject) const;
   bool  isSinglePointEvent(QEvent* theWrappedObject) const;
   QEvent*  operator_assign(QEvent* theWrappedObject, const QEvent&  other);
   int  static_QEvent_registerEventType(int  hint = -1);
   void setAccepted(QEvent* theWrappedObject, bool  accepted);
   void py_q_setAccepted(QEvent* theWrappedObject, bool  accepted){  (((PythonQtPublicPromoter_QEvent*)theWrappedObject)->py_q_setAccepted(accepted));}
   bool  spontaneous(QEvent* theWrappedObject) const;
   QEvent::Type  type(QEvent* theWrappedObject) const;
    QString py_toString(QEvent*);
};





class PythonQtShell_QEventLoop : public QEventLoop
{
public:
    PythonQtShell_QEventLoop(QObject*  parent = nullptr):QEventLoop(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QEventLoop() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QEventLoop : public QEventLoop
{ public:
inline bool  py_q_event(QEvent*  event) { return QEventLoop::event(event); }
};

class PythonQtWrapper_QEventLoop : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProcessEventsFlag )
Q_FLAGS(ProcessEventsFlags )
enum ProcessEventsFlag{
  AllEvents = QEventLoop::AllEvents,   ExcludeUserInputEvents = QEventLoop::ExcludeUserInputEvents,   ExcludeSocketNotifiers = QEventLoop::ExcludeSocketNotifiers,   WaitForMoreEvents = QEventLoop::WaitForMoreEvents,   X11ExcludeTimers = QEventLoop::X11ExcludeTimers,   EventLoopExec = QEventLoop::EventLoopExec,   DialogExec = QEventLoop::DialogExec,   ApplicationExec = QEventLoop::ApplicationExec};
Q_DECLARE_FLAGS(ProcessEventsFlags, ProcessEventsFlag)
public slots:
QEventLoop* new_QEventLoop(QObject*  parent = nullptr);
void delete_QEventLoop(QEventLoop* obj) { delete obj; }
   bool  py_q_event(QEventLoop* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QEventLoop*)theWrappedObject)->py_q_event(event));}
   int  exec(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   bool  isRunning(QEventLoop* theWrappedObject) const;
   bool  processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags, int  maximumTime);
   void wakeUp(QEventLoop* theWrappedObject);
};





class PythonQtShell_QFactoryInterface : public QFactoryInterface
{
public:
    PythonQtShell_QFactoryInterface():QFactoryInterface(),_wrapper(nullptr) {};

   ~PythonQtShell_QFactoryInterface() override;

QStringList  keys() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFactoryInterface : public QFactoryInterface
{ public:
inline QStringList  py_q_keys() const { return this->keys(); }
};

class PythonQtWrapper_QFactoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QFactoryInterface* new_QFactoryInterface();
void delete_QFactoryInterface(QFactoryInterface* obj) { delete obj; }
   QStringList  keys(QFactoryInterface* theWrappedObject) const;
   QStringList  py_q_keys(QFactoryInterface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFactoryInterface*)theWrappedObject)->py_q_keys());}
};





class PythonQtShell_QFile : public QFile
{
public:
    PythonQtShell_QFile():QFile(),_wrapper(nullptr) {};
    PythonQtShell_QFile(QObject*  parent):QFile(parent),_wrapper(nullptr) {};
    PythonQtShell_QFile(const QString&  name):QFile(name),_wrapper(nullptr) {};
    PythonQtShell_QFile(const QString&  name, QObject*  parent):QFile(name, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFile() override;

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

class PythonQtPublicPromoter_QFile : public QFile
{ public:
inline QString  py_q_fileName() const { return QFile::fileName(); }
inline bool  py_q_open(QIODeviceBase::OpenMode  flags) { return QFile::open(flags); }
inline QFileDevice::Permissions  py_q_permissions() const { return QFile::permissions(); }
inline bool  py_q_resize(qint64  sz) { return QFile::resize(sz); }
inline bool  py_q_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFile::setPermissions(permissionSpec); }
inline qint64  py_q_size() const { return QFile::size(); }
};

class PythonQtWrapper_QFile : public QObject
{ Q_OBJECT
public:
public slots:
QFile* new_QFile();
QFile* new_QFile(QObject*  parent);
QFile* new_QFile(const QString&  name);
QFile* new_QFile(const QString&  name, QObject*  parent);
void delete_QFile(QFile* obj) { delete obj; }
   bool  static_QFile_copy(const QString&  fileName, const QString&  newName);
   bool  copy(QFile* theWrappedObject, const QString&  newName);
   QString  static_QFile_decodeName(const QByteArray&  localFileName);
   QByteArray  static_QFile_encodeName(const QString&  fileName);
   bool  exists(QFile* theWrappedObject) const;
   bool  static_QFile_exists(const QString&  fileName);
   QString  py_q_fileName(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_fileName());}
   bool  static_QFile_link(const QString&  fileName, const QString&  newName);
   bool  link(QFile* theWrappedObject, const QString&  newName);
   bool  moveToTrash(QFile* theWrappedObject);
   bool  static_QFile_moveToTrash(const QString&  fileName, QString*  pathInTrash = nullptr);
   bool  py_q_open(QFile* theWrappedObject, QIODeviceBase::OpenMode  flags){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_open(flags));}
   bool  open(QFile* theWrappedObject, QIODeviceBase::OpenMode  flags, QFileDevice::Permissions  permissions);
   QFileDevice::Permissions  py_q_permissions(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_permissions());}
   QFileDevice::Permissions  static_QFile_permissions(const QString&  filename);
   bool  remove(QFile* theWrappedObject);
   bool  static_QFile_remove(const QString&  fileName);
   bool  rename(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_rename(const QString&  oldName, const QString&  newName);
   bool  static_QFile_resize(const QString&  filename, qint64  sz);
   bool  py_q_resize(QFile* theWrappedObject, qint64  sz){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_resize(sz));}
   void setFileName(QFile* theWrappedObject, const QString&  name);
   bool  py_q_setPermissions(QFile* theWrappedObject, QFileDevice::Permissions  permissionSpec){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_setPermissions(permissionSpec));}
   bool  static_QFile_setPermissions(const QString&  filename, QFileDevice::Permissions  permissionSpec);
   qint64  py_q_size(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_size());}
   QString  symLinkTarget(QFile* theWrappedObject) const;
   QString  static_QFile_symLinkTarget(const QString&  fileName);
};





class PythonQtShell_QFileDevice : public QFileDevice
{
public:
    PythonQtShell_QFileDevice():QFileDevice(),_wrapper(nullptr) {};
    PythonQtShell_QFileDevice(QObject*  parent):QFileDevice(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFileDevice() override;

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
bool  open(QIODeviceBase::OpenMode  mode) override;
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

class PythonQtPublicPromoter_QFileDevice : public QFileDevice
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QFileDevice::atEnd(); }
inline void py_q_close() { QFileDevice::close(); }
inline QString  py_q_fileName() const { return QFileDevice::fileName(); }
inline bool  py_q_isSequential() const { return QFileDevice::isSequential(); }
inline QFileDevice::Permissions  py_q_permissions() const { return QFileDevice::permissions(); }
inline qint64  py_q_pos() const { return QFileDevice::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QFileDevice::readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QFileDevice::readLineData(data, maxlen); }
inline bool  py_q_resize(qint64  sz) { return QFileDevice::resize(sz); }
inline bool  py_q_seek(qint64  offset) { return QFileDevice::seek(offset); }
inline bool  py_q_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFileDevice::setPermissions(permissionSpec); }
inline qint64  py_q_size() const { return QFileDevice::size(); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QFileDevice::writeData(data, len); }
};

class PythonQtWrapper_QFileDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FileError FileHandleFlag FileTime MemoryMapFlag Permission )
Q_FLAGS(FileHandleFlags MemoryMapFlags Permissions )
enum FileError{
  NoError = QFileDevice::NoError,   ReadError = QFileDevice::ReadError,   WriteError = QFileDevice::WriteError,   FatalError = QFileDevice::FatalError,   ResourceError = QFileDevice::ResourceError,   OpenError = QFileDevice::OpenError,   AbortError = QFileDevice::AbortError,   TimeOutError = QFileDevice::TimeOutError,   UnspecifiedError = QFileDevice::UnspecifiedError,   RemoveError = QFileDevice::RemoveError,   RenameError = QFileDevice::RenameError,   PositionError = QFileDevice::PositionError,   ResizeError = QFileDevice::ResizeError,   PermissionsError = QFileDevice::PermissionsError,   CopyError = QFileDevice::CopyError};
enum FileHandleFlag{
  AutoCloseHandle = QFileDevice::AutoCloseHandle,   DontCloseHandle = QFileDevice::DontCloseHandle};
enum FileTime{
  FileAccessTime = QFileDevice::FileAccessTime,   FileBirthTime = QFileDevice::FileBirthTime,   FileMetadataChangeTime = QFileDevice::FileMetadataChangeTime,   FileModificationTime = QFileDevice::FileModificationTime};
enum MemoryMapFlag{
  NoOptions = QFileDevice::NoOptions,   MapPrivateOption = QFileDevice::MapPrivateOption};
enum Permission{
  ReadOwner = QFileDevice::ReadOwner,   WriteOwner = QFileDevice::WriteOwner,   ExeOwner = QFileDevice::ExeOwner,   ReadUser = QFileDevice::ReadUser,   WriteUser = QFileDevice::WriteUser,   ExeUser = QFileDevice::ExeUser,   ReadGroup = QFileDevice::ReadGroup,   WriteGroup = QFileDevice::WriteGroup,   ExeGroup = QFileDevice::ExeGroup,   ReadOther = QFileDevice::ReadOther,   WriteOther = QFileDevice::WriteOther,   ExeOther = QFileDevice::ExeOther};
Q_DECLARE_FLAGS(FileHandleFlags, FileHandleFlag)
Q_DECLARE_FLAGS(MemoryMapFlags, MemoryMapFlag)
Q_DECLARE_FLAGS(Permissions, Permission)
public slots:
QFileDevice* new_QFileDevice();
QFileDevice* new_QFileDevice(QObject*  parent);
void delete_QFileDevice(QFileDevice* obj) { delete obj; }
   bool  py_q_atEnd(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_atEnd());}
   void py_q_close(QFileDevice* theWrappedObject){  (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_close());}
   QFileDevice::FileError  error(QFileDevice* theWrappedObject) const;
   QString  fileName(QFileDevice* theWrappedObject) const;
   QString  py_q_fileName(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_fileName());}
   QDateTime  fileTime(QFileDevice* theWrappedObject, QFileDevice::FileTime  time) const;
   bool  flush(QFileDevice* theWrappedObject);
   int  handle(QFileDevice* theWrappedObject) const;
   bool  py_q_isSequential(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_isSequential());}
   uchar*  map(QFileDevice* theWrappedObject, qint64  offset, qint64  size, QFileDevice::MemoryMapFlags  flags = QFileDevice::NoOptions);
   QFileDevice::Permissions  permissions(QFileDevice* theWrappedObject) const;
   QFileDevice::Permissions  py_q_permissions(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_permissions());}
   qint64  py_q_pos(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_pos());}
   qint64  py_q_readData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_readData(data, maxlen));}
   qint64  py_q_readLineData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   bool  resize(QFileDevice* theWrappedObject, qint64  sz);
   bool  py_q_resize(QFileDevice* theWrappedObject, qint64  sz){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_resize(sz));}
   bool  py_q_seek(QFileDevice* theWrappedObject, qint64  offset){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_seek(offset));}
   bool  setFileTime(QFileDevice* theWrappedObject, const QDateTime&  newDate, QFileDevice::FileTime  fileTime);
   bool  setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec);
   bool  py_q_setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_setPermissions(permissionSpec));}
   qint64  py_q_size(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_size());}
   bool  unmap(QFileDevice* theWrappedObject, uchar*  address);
   void unsetError(QFileDevice* theWrappedObject);
   qint64  py_q_writeData(QFileDevice* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QFileInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFileInfo* new_QFileInfo();
QFileInfo* new_QFileInfo(const QDir&  dir, const QString&  file);
QFileInfo* new_QFileInfo(const QFileDevice&  file);
QFileInfo* new_QFileInfo(const QFileInfo&  fileinfo);
QFileInfo* new_QFileInfo(const QString&  file);
void delete_QFileInfo(QFileInfo* obj) { delete obj; }
   QDir  absoluteDir(QFileInfo* theWrappedObject) const;
   QString  absoluteFilePath(QFileInfo* theWrappedObject) const;
   QString  absolutePath(QFileInfo* theWrappedObject) const;
   QString  baseName(QFileInfo* theWrappedObject) const;
   QDateTime  birthTime(QFileInfo* theWrappedObject) const;
   QString  bundleName(QFileInfo* theWrappedObject) const;
   bool  caching(QFileInfo* theWrappedObject) const;
   QString  canonicalFilePath(QFileInfo* theWrappedObject) const;
   QString  canonicalPath(QFileInfo* theWrappedObject) const;
   QString  completeBaseName(QFileInfo* theWrappedObject) const;
   QString  completeSuffix(QFileInfo* theWrappedObject) const;
   QDir  dir(QFileInfo* theWrappedObject) const;
   bool  exists(QFileInfo* theWrappedObject) const;
   bool  static_QFileInfo_exists(const QString&  file);
   QString  fileName(QFileInfo* theWrappedObject) const;
   QString  filePath(QFileInfo* theWrappedObject) const;
   QString  group(QFileInfo* theWrappedObject) const;
   uint  groupId(QFileInfo* theWrappedObject) const;
   bool  isAbsolute(QFileInfo* theWrappedObject) const;
   bool  isAlias(QFileInfo* theWrappedObject) const;
   bool  isBundle(QFileInfo* theWrappedObject) const;
   bool  isDir(QFileInfo* theWrappedObject) const;
   bool  isExecutable(QFileInfo* theWrappedObject) const;
   bool  isFile(QFileInfo* theWrappedObject) const;
   bool  isHidden(QFileInfo* theWrappedObject) const;
   bool  isJunction(QFileInfo* theWrappedObject) const;
   bool  isNativePath(QFileInfo* theWrappedObject) const;
   bool  isReadable(QFileInfo* theWrappedObject) const;
   bool  isRelative(QFileInfo* theWrappedObject) const;
   bool  isRoot(QFileInfo* theWrappedObject) const;
   bool  isShortcut(QFileInfo* theWrappedObject) const;
   bool  isSymLink(QFileInfo* theWrappedObject) const;
   bool  isSymbolicLink(QFileInfo* theWrappedObject) const;
   bool  isWritable(QFileInfo* theWrappedObject) const;
   QString  junctionTarget(QFileInfo* theWrappedObject) const;
   QDateTime  lastModified(QFileInfo* theWrappedObject) const;
   QDateTime  lastRead(QFileInfo* theWrappedObject) const;
   bool  makeAbsolute(QFileInfo* theWrappedObject);
   QDateTime  metadataChangeTime(QFileInfo* theWrappedObject) const;
   QString  owner(QFileInfo* theWrappedObject) const;
   uint  ownerId(QFileInfo* theWrappedObject) const;
   QString  path(QFileInfo* theWrappedObject) const;
   bool  permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const;
   QFile::Permissions  permissions(QFileInfo* theWrappedObject) const;
   void refresh(QFileInfo* theWrappedObject);
   void setCaching(QFileInfo* theWrappedObject, bool  on);
   void setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file);
   void setFile(QFileInfo* theWrappedObject, const QFileDevice&  file);
   void setFile(QFileInfo* theWrappedObject, const QString&  file);
   qint64  size(QFileInfo* theWrappedObject) const;
   void stat(QFileInfo* theWrappedObject);
   QString  suffix(QFileInfo* theWrappedObject) const;
   void swap(QFileInfo* theWrappedObject, QFileInfo&  other);
   QString  symLinkTarget(QFileInfo* theWrappedObject) const;
    QString py_toString(QFileInfo*);
};


