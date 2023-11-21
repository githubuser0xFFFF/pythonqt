#include "com_trolltech_qt_core3.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
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
#include <qtemporarydir.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
#include <qtextstream.h>
#include <qthread.h>
#include <qthreadpool.h>
#include <qtimezone.h>
#include <qurl.h>
#include <qurlquery.h>
#include <quuid.h>

QSystemSemaphore* PythonQtWrapper_QSystemSemaphore::new_QSystemSemaphore(const QString&  key, int  initialValue, QSystemSemaphore::AccessMode  mode)
{ 
return new QSystemSemaphore(key, initialValue, mode); }

bool  PythonQtWrapper_QSystemSemaphore::acquire(QSystemSemaphore* theWrappedObject)
{
  return ( theWrappedObject->acquire());
}

QSystemSemaphore::SystemSemaphoreError  PythonQtWrapper_QSystemSemaphore::error(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSystemSemaphore::errorString(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QSystemSemaphore::key(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

bool  PythonQtWrapper_QSystemSemaphore::release(QSystemSemaphore* theWrappedObject, int  n)
{
  return ( theWrappedObject->release(n));
}

void PythonQtWrapper_QSystemSemaphore::setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue, QSystemSemaphore::AccessMode  mode)
{
  ( theWrappedObject->setKey(key, initialValue, mode));
}

QString  PythonQtWrapper_QSystemSemaphore::static_QSystemSemaphore_tr(const char*  sourceText, const char*  disambiguation, int  n)
{
  return (QSystemSemaphore::tr(sourceText, disambiguation, n));
}



QTemporaryDir* PythonQtWrapper_QTemporaryDir::new_QTemporaryDir()
{ 
return new QTemporaryDir(); }

QTemporaryDir* PythonQtWrapper_QTemporaryDir::new_QTemporaryDir(const QString&  templateName)
{ 
return new QTemporaryDir(templateName); }

bool  PythonQtWrapper_QTemporaryDir::autoRemove(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->autoRemove());
}

QString  PythonQtWrapper_QTemporaryDir::errorString(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QTemporaryDir::filePath(QTemporaryDir* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->filePath(fileName));
}

bool  PythonQtWrapper_QTemporaryDir::isValid(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTemporaryDir::path(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

bool  PythonQtWrapper_QTemporaryDir::remove(QTemporaryDir* theWrappedObject)
{
  return ( theWrappedObject->remove());
}

void PythonQtWrapper_QTemporaryDir::setAutoRemove(QTemporaryDir* theWrappedObject, bool  b)
{
  ( theWrappedObject->setAutoRemove(b));
}

void PythonQtWrapper_QTemporaryDir::swap(QTemporaryDir* theWrappedObject, QTemporaryDir&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QTemporaryFile::~PythonQtShell_QTemporaryFile() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QTemporaryFile::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::atEnd();
}
qint64  PythonQtShell_QTemporaryFile::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::bytesAvailable();
}
qint64  PythonQtShell_QTemporaryFile::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::bytesToWrite();
}
bool  PythonQtShell_QTemporaryFile::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::canReadLine();
}
void PythonQtShell_QTemporaryFile::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTemporaryFile::childEvent(event0);
}
void PythonQtShell_QTemporaryFile::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTemporaryFile::close();
}
void PythonQtShell_QTemporaryFile::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTemporaryFile::customEvent(event0);
}
bool  PythonQtShell_QTemporaryFile::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::event(event0);
}
bool  PythonQtShell_QTemporaryFile::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::eventFilter(watched0, event1);
}
QString  PythonQtShell_QTemporaryFile::fileName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("uniqueFilename");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("uniqueFilename", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::fileName();
}
bool  PythonQtShell_QTemporaryFile::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::isSequential();
}
bool  PythonQtShell_QTemporaryFile::open(QIODeviceBase::OpenMode  flags0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODeviceBase::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&flags0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::open(flags0);
}
QFileDevice::Permissions  PythonQtShell_QTemporaryFile::permissions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("permissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFileDevice::Permissions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("permissions", methodInfo, result);
          } else {
            returnValue = *((QFileDevice::Permissions*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::permissions();
}
qint64  PythonQtShell_QTemporaryFile::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::pos();
}
qint64  PythonQtShell_QTemporaryFile::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::readData(data0, maxlen1);
}
qint64  PythonQtShell_QTemporaryFile::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QTemporaryFile::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::reset();
}
bool  PythonQtShell_QTemporaryFile::resize(qint64  sz0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&sz0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resize", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::resize(sz0);
}
bool  PythonQtShell_QTemporaryFile::seek(qint64  offset0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::seek(offset0);
}
bool  PythonQtShell_QTemporaryFile::setPermissions(QFileDevice::Permissions  permissionSpec0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setPermissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&permissionSpec0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setPermissions", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::setPermissions(permissionSpec0);
}
qint64  PythonQtShell_QTemporaryFile::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::size();
}
qint64  PythonQtShell_QTemporaryFile::skipData(qint64  maxSize0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("skipData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      qint64 returnValue{};
      void* args[2] = {nullptr, (void*)&maxSize0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("skipData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::skipData(maxSize0);
}
void PythonQtShell_QTemporaryFile::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTemporaryFile::timerEvent(event0);
}
bool  PythonQtShell_QTemporaryFile::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QTemporaryFile::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QTemporaryFile::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTemporaryFile::writeData(data0, len1);
}
QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile()
{ 
return new PythonQtShell_QTemporaryFile(); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(QObject*  parent)
{ 
return new PythonQtShell_QTemporaryFile(parent); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(const QString&  templateName)
{ 
return new PythonQtShell_QTemporaryFile(templateName); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(const QString&  templateName, QObject*  parent)
{ 
return new PythonQtShell_QTemporaryFile(templateName, parent); }

const QMetaObject* PythonQtShell_QTemporaryFile::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTemporaryFile::staticMetaObject);
  } else {
    return &QTemporaryFile::staticMetaObject;
  }
}
int PythonQtShell_QTemporaryFile::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTemporaryFile::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QTemporaryFile::autoRemove(QTemporaryFile* theWrappedObject) const
{
  return ( theWrappedObject->autoRemove());
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createNativeFile(QFile&  file)
{
  return (QTemporaryFile::createNativeFile(file));
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createNativeFile(const QString&  fileName)
{
  return (QTemporaryFile::createNativeFile(fileName));
}

QString  PythonQtWrapper_QTemporaryFile::fileName(QTemporaryFile* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QTemporaryFile::fileTemplate(QTemporaryFile* theWrappedObject) const
{
  return ( theWrappedObject->fileTemplate());
}

bool  PythonQtWrapper_QTemporaryFile::open(QTemporaryFile* theWrappedObject)
{
  return ( theWrappedObject->open());
}

bool  PythonQtWrapper_QTemporaryFile::rename(QTemporaryFile* theWrappedObject, const QString&  newName)
{
  return ( theWrappedObject->rename(newName));
}

void PythonQtWrapper_QTemporaryFile::setAutoRemove(QTemporaryFile* theWrappedObject, bool  b)
{
  ( theWrappedObject->setAutoRemove(b));
}

void PythonQtWrapper_QTemporaryFile::setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setFileTemplate(name));
}



QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder()
{ 
return new QTextBoundaryFinder(); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QChar*  chars, qsizetype  length, unsigned char*  buffer, qsizetype  bufferSize)
{ 
return new QTextBoundaryFinder(type, chars, length, buffer, bufferSize); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string)
{ 
return new QTextBoundaryFinder(type, string); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(const QTextBoundaryFinder&  other)
{ 
return new QTextBoundaryFinder(other); }

QTextBoundaryFinder::BoundaryReasons  PythonQtWrapper_QTextBoundaryFinder::boundaryReasons(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->boundaryReasons());
}

bool  PythonQtWrapper_QTextBoundaryFinder::isAtBoundary(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->isAtBoundary());
}

bool  PythonQtWrapper_QTextBoundaryFinder::isValid(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qsizetype  PythonQtWrapper_QTextBoundaryFinder::position(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

void PythonQtWrapper_QTextBoundaryFinder::setPosition(QTextBoundaryFinder* theWrappedObject, qsizetype  position)
{
  ( theWrappedObject->setPosition(position));
}

QString  PythonQtWrapper_QTextBoundaryFinder::string(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->string());
}

void PythonQtWrapper_QTextBoundaryFinder::toEnd(QTextBoundaryFinder* theWrappedObject)
{
  ( theWrappedObject->toEnd());
}

qsizetype  PythonQtWrapper_QTextBoundaryFinder::toNextBoundary(QTextBoundaryFinder* theWrappedObject)
{
  return ( theWrappedObject->toNextBoundary());
}

qsizetype  PythonQtWrapper_QTextBoundaryFinder::toPreviousBoundary(QTextBoundaryFinder* theWrappedObject)
{
  return ( theWrappedObject->toPreviousBoundary());
}

void PythonQtWrapper_QTextBoundaryFinder::toStart(QTextBoundaryFinder* theWrappedObject)
{
  ( theWrappedObject->toStart());
}

QTextBoundaryFinder::BoundaryType  PythonQtWrapper_QTextBoundaryFinder::type(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QTextStream::~PythonQtShell_QTextStream() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextStream* PythonQtWrapper_QTextStream::new_QTextStream()
{ 
return new PythonQtShell_QTextStream(); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(QByteArray*  array, QIODeviceBase::OpenMode  openMode)
{ 
return new PythonQtShell_QTextStream(array, openMode); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(QIODevice*  device)
{ 
return new PythonQtShell_QTextStream(device); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(QString*  string, QIODeviceBase::OpenMode  openMode)
{ 
return new PythonQtShell_QTextStream(string, openMode); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(const QByteArray&  array, QIODeviceBase::OpenMode  openMode)
{ 
return new PythonQtShell_QTextStream(array, openMode); }

bool  PythonQtWrapper_QTextStream::atEnd(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

bool  PythonQtWrapper_QTextStream::autoDetectUnicode(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->autoDetectUnicode());
}

QIODevice*  PythonQtWrapper_QTextStream::device(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QTextStream::FieldAlignment  PythonQtWrapper_QTextStream::fieldAlignment(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->fieldAlignment());
}

int  PythonQtWrapper_QTextStream::fieldWidth(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->fieldWidth());
}

void PythonQtWrapper_QTextStream::flush(QTextStream* theWrappedObject)
{
  ( theWrappedObject->flush());
}

bool  PythonQtWrapper_QTextStream::generateByteOrderMark(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->generateByteOrderMark());
}

int  PythonQtWrapper_QTextStream::integerBase(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->integerBase());
}

QLocale  PythonQtWrapper_QTextStream::locale(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->locale());
}

QTextStream::NumberFlags  PythonQtWrapper_QTextStream::numberFlags(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->numberFlags());
}

QTextStream*  PythonQtWrapper_QTextStream::writeByte(QTextStream* theWrappedObject, char  ch)
{
  return &( (*theWrappedObject) <<ch);
}

QTextStream*  PythonQtWrapper_QTextStream::writeDouble(QTextStream* theWrappedObject, double  f)
{
  return &( (*theWrappedObject) <<f);
}

QTextStream*  PythonQtWrapper_QTextStream::writeFloat(QTextStream* theWrappedObject, float  f)
{
  return &( (*theWrappedObject) <<f);
}

QTextStream*  PythonQtWrapper_QTextStream::writeLongLong(QTextStream* theWrappedObject, qlonglong  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::writeInt(QTextStream* theWrappedObject, signed int  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::writeShort(QTextStream* theWrappedObject, signed short  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::readByte(QTextStream* theWrappedObject, char&  ch)
{
  return &( (*theWrappedObject) >>ch);
}

QTextStream*  PythonQtWrapper_QTextStream::readDouble(QTextStream* theWrappedObject, double&  f)
{
  return &( (*theWrappedObject) >>f);
}

QTextStream*  PythonQtWrapper_QTextStream::readFloat(QTextStream* theWrappedObject, float&  f)
{
  return &( (*theWrappedObject) >>f);
}

QTextStream*  PythonQtWrapper_QTextStream::readLongLong(QTextStream* theWrappedObject, qlonglong&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::readInt(QTextStream* theWrappedObject, signed int&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::readShort(QTextStream* theWrappedObject, signed short&  i)
{
  return &( (*theWrappedObject) >>i);
}

QChar  PythonQtWrapper_QTextStream::padChar(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->padChar());
}

qint64  PythonQtWrapper_QTextStream::pos(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QString  PythonQtWrapper_QTextStream::read(QTextStream* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->read(maxlen));
}

QString  PythonQtWrapper_QTextStream::readAll(QTextStream* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

QString  PythonQtWrapper_QTextStream::readLine(QTextStream* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->readLine(maxlen));
}

bool  PythonQtWrapper_QTextStream::readLineInto(QTextStream* theWrappedObject, QString*  line, qint64  maxlen)
{
  return ( theWrappedObject->readLineInto(line, maxlen));
}

QTextStream::RealNumberNotation  PythonQtWrapper_QTextStream::realNumberNotation(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->realNumberNotation());
}

int  PythonQtWrapper_QTextStream::realNumberPrecision(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->realNumberPrecision());
}

void PythonQtWrapper_QTextStream::reset(QTextStream* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QTextStream::resetStatus(QTextStream* theWrappedObject)
{
  ( theWrappedObject->resetStatus());
}

bool  PythonQtWrapper_QTextStream::seek(QTextStream* theWrappedObject, qint64  pos)
{
  return ( theWrappedObject->seek(pos));
}

void PythonQtWrapper_QTextStream::setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAutoDetectUnicode(enabled));
}

void PythonQtWrapper_QTextStream::setDevice(QTextStream* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QTextStream::setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment)
{
  ( theWrappedObject->setFieldAlignment(alignment));
}

void PythonQtWrapper_QTextStream::setFieldWidth(QTextStream* theWrappedObject, int  width)
{
  ( theWrappedObject->setFieldWidth(width));
}

void PythonQtWrapper_QTextStream::setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate)
{
  ( theWrappedObject->setGenerateByteOrderMark(generate));
}

void PythonQtWrapper_QTextStream::setIntegerBase(QTextStream* theWrappedObject, int  base)
{
  ( theWrappedObject->setIntegerBase(base));
}

void PythonQtWrapper_QTextStream::setLocale(QTextStream* theWrappedObject, const QLocale&  locale)
{
  ( theWrappedObject->setLocale(locale));
}

void PythonQtWrapper_QTextStream::setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags)
{
  ( theWrappedObject->setNumberFlags(flags));
}

void PythonQtWrapper_QTextStream::setPadChar(QTextStream* theWrappedObject, QChar  ch)
{
  ( theWrappedObject->setPadChar(ch));
}

void PythonQtWrapper_QTextStream::setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation)
{
  ( theWrappedObject->setRealNumberNotation(notation));
}

void PythonQtWrapper_QTextStream::setRealNumberPrecision(QTextStream* theWrappedObject, int  precision)
{
  ( theWrappedObject->setRealNumberPrecision(precision));
}

void PythonQtWrapper_QTextStream::setStatus(QTextStream* theWrappedObject, QTextStream::Status  status)
{
  ( theWrappedObject->setStatus(status));
}

void PythonQtWrapper_QTextStream::setString(QTextStream* theWrappedObject, QString*  string, QIODeviceBase::OpenMode  openMode)
{
  ( theWrappedObject->setString(string, openMode));
}

void PythonQtWrapper_QTextStream::skipWhiteSpace(QTextStream* theWrappedObject)
{
  ( theWrappedObject->skipWhiteSpace());
}

QTextStream::Status  PythonQtWrapper_QTextStream::status(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->status());
}



PythonQtShell_QThread::~PythonQtShell_QThread() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QThread::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QThread::childEvent(event0);
}
void PythonQtShell_QThread::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QThread::customEvent(event0);
}
bool  PythonQtShell_QThread::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QThread::event(event0);
}
bool  PythonQtShell_QThread::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QThread::eventFilter(watched0, event1);
}
void PythonQtShell_QThread::run()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("run");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QThread::run();
}
void PythonQtShell_QThread::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QThread::timerEvent(event0);
}
QThread* PythonQtWrapper_QThread::new_QThread(QObject*  parent)
{ 
return new PythonQtShell_QThread(parent); }

const QMetaObject* PythonQtShell_QThread::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QThread::staticMetaObject);
  } else {
    return &QThread::staticMetaObject;
  }
}
int PythonQtShell_QThread::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QThread::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QThread*  PythonQtWrapper_QThread::static_QThread_currentThread()
{
  return (QThread::currentThread());
}

Qt::HANDLE  PythonQtWrapper_QThread::static_QThread_currentThreadId()
{
  return (QThread::currentThreadId());
}

QAbstractEventDispatcher*  PythonQtWrapper_QThread::eventDispatcher(QThread* theWrappedObject) const
{
  return ( theWrappedObject->eventDispatcher());
}

int  PythonQtWrapper_QThread::exec(QThread* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QThread*)theWrappedObject)->promoted_exec());
}

int  PythonQtWrapper_QThread::static_QThread_idealThreadCount()
{
  return (QThread::idealThreadCount());
}

bool  PythonQtWrapper_QThread::isFinished(QThread* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

bool  PythonQtWrapper_QThread::isInterruptionRequested(QThread* theWrappedObject) const
{
  return ( theWrappedObject->isInterruptionRequested());
}

bool  PythonQtWrapper_QThread::isRunning(QThread* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

int  PythonQtWrapper_QThread::loopLevel(QThread* theWrappedObject) const
{
  return ( theWrappedObject->loopLevel());
}

void PythonQtWrapper_QThread::static_QThread_msleep(unsigned long  arg__1)
{
  (QThread::msleep(arg__1));
}

QThread::Priority  PythonQtWrapper_QThread::priority(QThread* theWrappedObject) const
{
  return ( theWrappedObject->priority());
}

void PythonQtWrapper_QThread::requestInterruption(QThread* theWrappedObject)
{
  ( theWrappedObject->requestInterruption());
}

void PythonQtWrapper_QThread::run(QThread* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QThread*)theWrappedObject)->promoted_run());
}

void PythonQtWrapper_QThread::setEventDispatcher(QThread* theWrappedObject, QAbstractEventDispatcher*  eventDispatcher)
{
  ( theWrappedObject->setEventDispatcher(eventDispatcher));
}

void PythonQtWrapper_QThread::setPriority(QThread* theWrappedObject, QThread::Priority  priority)
{
  ( theWrappedObject->setPriority(priority));
}

void PythonQtWrapper_QThread::setStackSize(QThread* theWrappedObject, uint  stackSize)
{
  ( theWrappedObject->setStackSize(stackSize));
}

void PythonQtWrapper_QThread::static_QThread_setTerminationEnabled(bool  enabled)
{
  (PythonQtPublicPromoter_QThread::promoted_setTerminationEnabled(enabled));
}

void PythonQtWrapper_QThread::static_QThread_sleep(unsigned long  arg__1)
{
  (QThread::sleep(arg__1));
}

uint  PythonQtWrapper_QThread::stackSize(QThread* theWrappedObject) const
{
  return ( theWrappedObject->stackSize());
}

void PythonQtWrapper_QThread::static_QThread_usleep(unsigned long  arg__1)
{
  (QThread::usleep(arg__1));
}

bool  PythonQtWrapper_QThread::wait(QThread* theWrappedObject, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(deadline));
}

bool  PythonQtWrapper_QThread::wait(QThread* theWrappedObject, unsigned long  time)
{
  return ( theWrappedObject->wait(time));
}

void PythonQtWrapper_QThread::static_QThread_yieldCurrentThread()
{
  (QThread::yieldCurrentThread());
}



PythonQtShell_QThreadPool::~PythonQtShell_QThreadPool() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QThreadPool::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QThreadPool::childEvent(event0);
}
void PythonQtShell_QThreadPool::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QThreadPool::customEvent(event0);
}
bool  PythonQtShell_QThreadPool::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QThreadPool::event(event0);
}
bool  PythonQtShell_QThreadPool::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QThreadPool::eventFilter(watched0, event1);
}
void PythonQtShell_QThreadPool::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QThreadPool::timerEvent(event0);
}
QThreadPool* PythonQtWrapper_QThreadPool::new_QThreadPool(QObject*  parent)
{ 
return new PythonQtShell_QThreadPool(parent); }

const QMetaObject* PythonQtShell_QThreadPool::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QThreadPool::staticMetaObject);
  } else {
    return &QThreadPool::staticMetaObject;
  }
}
int PythonQtShell_QThreadPool::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QThreadPool::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QThreadPool::activeThreadCount(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->activeThreadCount());
}

void PythonQtWrapper_QThreadPool::clear(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QThreadPool::contains(QThreadPool* theWrappedObject, const QThread*  thread) const
{
  return ( theWrappedObject->contains(thread));
}

int  PythonQtWrapper_QThreadPool::expiryTimeout(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->expiryTimeout());
}

QThreadPool*  PythonQtWrapper_QThreadPool::static_QThreadPool_globalInstance()
{
  return (QThreadPool::globalInstance());
}

int  PythonQtWrapper_QThreadPool::maxThreadCount(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->maxThreadCount());
}

void PythonQtWrapper_QThreadPool::releaseThread(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->releaseThread());
}

void PythonQtWrapper_QThreadPool::reserveThread(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->reserveThread());
}

void PythonQtWrapper_QThreadPool::setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout)
{
  ( theWrappedObject->setExpiryTimeout(expiryTimeout));
}

void PythonQtWrapper_QThreadPool::setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount)
{
  ( theWrappedObject->setMaxThreadCount(maxThreadCount));
}

void PythonQtWrapper_QThreadPool::setStackSize(QThreadPool* theWrappedObject, uint  stackSize)
{
  ( theWrappedObject->setStackSize(stackSize));
}

void PythonQtWrapper_QThreadPool::setThreadPriority(QThreadPool* theWrappedObject, QThread::Priority  priority)
{
  ( theWrappedObject->setThreadPriority(priority));
}

uint  PythonQtWrapper_QThreadPool::stackSize(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->stackSize());
}

void PythonQtWrapper_QThreadPool::start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority)
{
  ( theWrappedObject->start(runnable, priority));
}

void PythonQtWrapper_QThreadPool::startOnReservedThread(QThreadPool* theWrappedObject, QRunnable*  runnable)
{
  ( theWrappedObject->startOnReservedThread(runnable));
}

QThread::Priority  PythonQtWrapper_QThreadPool::threadPriority(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->threadPriority());
}

bool  PythonQtWrapper_QThreadPool::tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable)
{
  return ( theWrappedObject->tryStart(runnable));
}

bool  PythonQtWrapper_QThreadPool::tryTake(QThreadPool* theWrappedObject, QRunnable*  runnable)
{
  return ( theWrappedObject->tryTake(runnable));
}

bool  PythonQtWrapper_QThreadPool::waitForDone(QThreadPool* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDone(msecs));
}



PythonQtShell_QTimeLine::~PythonQtShell_QTimeLine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTimeLine::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimeLine::childEvent(event0);
}
void PythonQtShell_QTimeLine::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimeLine::customEvent(event0);
}
bool  PythonQtShell_QTimeLine::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTimeLine::event(event0);
}
bool  PythonQtShell_QTimeLine::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTimeLine::eventFilter(watched0, event1);
}
void PythonQtShell_QTimeLine::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimeLine::timerEvent(event0);
}
qreal  PythonQtShell_QTimeLine::valueForTime(int  msec0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("valueForTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qreal" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      qreal returnValue{};
      void* args[2] = {nullptr, (void*)&msec0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("valueForTime", methodInfo, result);
          } else {
            returnValue = *((qreal*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTimeLine::valueForTime(msec0);
}
QTimeLine* PythonQtWrapper_QTimeLine::new_QTimeLine(int  duration, QObject*  parent)
{ 
return new PythonQtShell_QTimeLine(duration, parent); }

const QMetaObject* PythonQtShell_QTimeLine::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTimeLine::staticMetaObject);
  } else {
    return &QTimeLine::staticMetaObject;
  }
}
int PythonQtShell_QTimeLine::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTimeLine::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QTimeLine::currentFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentFrame());
}

int  PythonQtWrapper_QTimeLine::currentTime(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentTime());
}

qreal  PythonQtWrapper_QTimeLine::currentValue(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentValue());
}

QTimeLine::Direction  PythonQtWrapper_QTimeLine::direction(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->direction());
}

int  PythonQtWrapper_QTimeLine::duration(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QEasingCurve  PythonQtWrapper_QTimeLine::easingCurve(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->easingCurve());
}

int  PythonQtWrapper_QTimeLine::endFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->endFrame());
}

int  PythonQtWrapper_QTimeLine::frameForTime(QTimeLine* theWrappedObject, int  msec) const
{
  return ( theWrappedObject->frameForTime(msec));
}

int  PythonQtWrapper_QTimeLine::loopCount(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

void PythonQtWrapper_QTimeLine::setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction)
{
  ( theWrappedObject->setDirection(direction));
}

void PythonQtWrapper_QTimeLine::setDuration(QTimeLine* theWrappedObject, int  duration)
{
  ( theWrappedObject->setDuration(duration));
}

void PythonQtWrapper_QTimeLine::setEasingCurve(QTimeLine* theWrappedObject, const QEasingCurve&  curve)
{
  ( theWrappedObject->setEasingCurve(curve));
}

void PythonQtWrapper_QTimeLine::setEndFrame(QTimeLine* theWrappedObject, int  frame)
{
  ( theWrappedObject->setEndFrame(frame));
}

void PythonQtWrapper_QTimeLine::setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame)
{
  ( theWrappedObject->setFrameRange(startFrame, endFrame));
}

void PythonQtWrapper_QTimeLine::setLoopCount(QTimeLine* theWrappedObject, int  count)
{
  ( theWrappedObject->setLoopCount(count));
}

void PythonQtWrapper_QTimeLine::setStartFrame(QTimeLine* theWrappedObject, int  frame)
{
  ( theWrappedObject->setStartFrame(frame));
}

void PythonQtWrapper_QTimeLine::setUpdateInterval(QTimeLine* theWrappedObject, int  interval)
{
  ( theWrappedObject->setUpdateInterval(interval));
}

int  PythonQtWrapper_QTimeLine::startFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->startFrame());
}

QTimeLine::State  PythonQtWrapper_QTimeLine::state(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

int  PythonQtWrapper_QTimeLine::updateInterval(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->updateInterval());
}

qreal  PythonQtWrapper_QTimeLine::valueForTime(QTimeLine* theWrappedObject, int  msec) const
{
  return ( theWrappedObject->valueForTime(msec));
}



QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone()
{ 
return new QTimeZone(); }

QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone(QTimeZone::Initialization  spec)
{ 
return new QTimeZone(spec); }

QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone(const QByteArray&  ianaId)
{ 
return new QTimeZone(ianaId); }

QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone(const QByteArray&  zoneId, int  offsetSeconds, const QString&  name, const QString&  abbreviation, QLocale::Country  territory, const QString&  comment)
{ 
return new QTimeZone(zoneId, offsetSeconds, name, abbreviation, territory, comment); }

QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone(const QTimeZone&  other)
{ 
return new QTimeZone(other); }

QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone(int  offsetSeconds)
{ 
return new QTimeZone(offsetSeconds); }

QString  PythonQtWrapper_QTimeZone::abbreviation(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->abbreviation(atDateTime));
}

QTimeZone  PythonQtWrapper_QTimeZone::asBackendZone(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->asBackendZone());
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_availableTimeZoneIds()
{
  return (QTimeZone::availableTimeZoneIds());
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_availableTimeZoneIds(QLocale::Country  territory)
{
  return (QTimeZone::availableTimeZoneIds(territory));
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_availableTimeZoneIds(int  offsetSeconds)
{
  return (QTimeZone::availableTimeZoneIds(offsetSeconds));
}

QString  PythonQtWrapper_QTimeZone::comment(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->comment());
}

QLocale::Country  PythonQtWrapper_QTimeZone::country(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->country());
}

int  PythonQtWrapper_QTimeZone::daylightTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->daylightTimeOffset(atDateTime));
}

QString  PythonQtWrapper_QTimeZone::displayName(QTimeZone* theWrappedObject, QTimeZone::TimeType  timeType, QTimeZone::NameType  nameType, const QLocale&  locale) const
{
  return ( theWrappedObject->displayName(timeType, nameType, locale));
}

QString  PythonQtWrapper_QTimeZone::displayName(QTimeZone* theWrappedObject, const QDateTime&  atDateTime, QTimeZone::NameType  nameType, const QLocale&  locale) const
{
  return ( theWrappedObject->displayName(atDateTime, nameType, locale));
}

int  PythonQtWrapper_QTimeZone::fixedSecondsAheadOfUtc(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->fixedSecondsAheadOfUtc());
}

QTimeZone  PythonQtWrapper_QTimeZone::static_QTimeZone_fromSecondsAheadOfUtc(int  offset)
{
  return (QTimeZone::fromSecondsAheadOfUtc(offset));
}

bool  PythonQtWrapper_QTimeZone::hasDaylightTime(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->hasDaylightTime());
}

bool  PythonQtWrapper_QTimeZone::hasTransitions(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->hasTransitions());
}

QByteArray  PythonQtWrapper_QTimeZone::static_QTimeZone_ianaIdToWindowsId(const QByteArray&  ianaId)
{
  return (QTimeZone::ianaIdToWindowsId(ianaId));
}

QByteArray  PythonQtWrapper_QTimeZone::id(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

bool  PythonQtWrapper_QTimeZone::isDaylightTime(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->isDaylightTime(atDateTime));
}

bool  PythonQtWrapper_QTimeZone::static_QTimeZone_isTimeZoneIdAvailable(const QByteArray&  ianaId)
{
  return (QTimeZone::isTimeZoneIdAvailable(ianaId));
}

bool  PythonQtWrapper_QTimeZone::isUtcOrFixedOffset(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->isUtcOrFixedOffset());
}

bool  PythonQtWrapper_QTimeZone::static_QTimeZone_isUtcOrFixedOffset(Qt::TimeSpec  spec)
{
  return (QTimeZone::isUtcOrFixedOffset(spec));
}

bool  PythonQtWrapper_QTimeZone::isValid(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QTimeZone::offsetFromUtc(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->offsetFromUtc(atDateTime));
}

bool  PythonQtWrapper_QTimeZone::__ne__(QTimeZone* theWrappedObject, const QTimeZone&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QTimeZone::writeTo(QTimeZone* theWrappedObject, QDataStream&  ds)
{
  ds <<  (*theWrappedObject);
}

QTimeZone*  PythonQtWrapper_QTimeZone::operator_assign(QTimeZone* theWrappedObject, const QTimeZone&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QTimeZone::__eq__(QTimeZone* theWrappedObject, const QTimeZone&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QTimeZone::readFrom(QTimeZone* theWrappedObject, QDataStream&  ds)
{
  ds >>  (*theWrappedObject);
}

int  PythonQtWrapper_QTimeZone::standardTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->standardTimeOffset(atDateTime));
}

void PythonQtWrapper_QTimeZone::swap(QTimeZone* theWrappedObject, QTimeZone&  other)
{
  ( theWrappedObject->swap(other));
}

QTimeZone  PythonQtWrapper_QTimeZone::static_QTimeZone_systemTimeZone()
{
  return (QTimeZone::systemTimeZone());
}

QByteArray  PythonQtWrapper_QTimeZone::static_QTimeZone_systemTimeZoneId()
{
  return (QTimeZone::systemTimeZoneId());
}

QLocale::Country  PythonQtWrapper_QTimeZone::territory(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->territory());
}

Qt::TimeSpec  PythonQtWrapper_QTimeZone::timeSpec(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->timeSpec());
}

QTimeZone  PythonQtWrapper_QTimeZone::static_QTimeZone_utc()
{
  return (QTimeZone::utc());
}

QByteArray  PythonQtWrapper_QTimeZone::static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId)
{
  return (QTimeZone::windowsIdToDefaultIanaId(windowsId));
}

QByteArray  PythonQtWrapper_QTimeZone::static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId, QLocale::Country  territory)
{
  return (QTimeZone::windowsIdToDefaultIanaId(windowsId, territory));
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId)
{
  return (QTimeZone::windowsIdToIanaIds(windowsId));
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId, QLocale::Country  territory)
{
  return (QTimeZone::windowsIdToIanaIds(windowsId, territory));
}

QString PythonQtWrapper_QTimeZone::py_toString(QTimeZone* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QTimer::~PythonQtShell_QTimer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTimer::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimer::childEvent(event0);
}
void PythonQtShell_QTimer::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimer::customEvent(event0);
}
bool  PythonQtShell_QTimer::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTimer::event(event0);
}
bool  PythonQtShell_QTimer::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTimer::eventFilter(watched0, event1);
}
void PythonQtShell_QTimer::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimer::timerEvent(arg__1);
}
QTimer* PythonQtWrapper_QTimer::new_QTimer(QObject*  parent)
{ 
return new PythonQtShell_QTimer(parent); }

const QMetaObject* PythonQtShell_QTimer::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTimer::staticMetaObject);
  } else {
    return &QTimer::staticMetaObject;
  }
}
int PythonQtShell_QTimer::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTimer::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QTimer::interval(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->interval());
}

bool  PythonQtWrapper_QTimer::isActive(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QTimer::isSingleShot(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->isSingleShot());
}

int  PythonQtWrapper_QTimer::remainingTime(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->remainingTime());
}

void PythonQtWrapper_QTimer::setInterval(QTimer* theWrappedObject, int  msec)
{
  ( theWrappedObject->setInterval(msec));
}

void PythonQtWrapper_QTimer::setSingleShot(QTimer* theWrappedObject, bool  singleShot)
{
  ( theWrappedObject->setSingleShot(singleShot));
}

void PythonQtWrapper_QTimer::setTimerType(QTimer* theWrappedObject, Qt::TimerType  atype)
{
  ( theWrappedObject->setTimerType(atype));
}

void PythonQtWrapper_QTimer::static_QTimer_singleShot(int  msec, Qt::TimerType  timerType, const QObject*  receiver, const char*  member)
{
  (QTimer::singleShot(msec, timerType, receiver, member));
}

void PythonQtWrapper_QTimer::static_QTimer_singleShot(int  msec, const QObject*  receiver, const char*  member)
{
  (QTimer::singleShot(msec, receiver, member));
}

int  PythonQtWrapper_QTimer::timerId(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}

Qt::TimerType  PythonQtWrapper_QTimer::timerType(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerType());
}



PythonQtShell_QTimerEvent::~PythonQtShell_QTimerEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTimerEvent*  PythonQtShell_QTimerEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QTimerEvent* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QTimerEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTimerEvent::clone();
}
void PythonQtShell_QTimerEvent::setAccepted(bool  accepted0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setAccepted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&accepted0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimerEvent::setAccepted(accepted0);
}
QTimerEvent* PythonQtWrapper_QTimerEvent::new_QTimerEvent(const QTimerEvent&  arg__1)
{ 
return new PythonQtShell_QTimerEvent(arg__1); }

QTimerEvent* PythonQtWrapper_QTimerEvent::new_QTimerEvent(int  timerId)
{ 
return new PythonQtShell_QTimerEvent(timerId); }

QTimerEvent*  PythonQtWrapper_QTimerEvent::operator_assign(QTimerEvent* theWrappedObject, const QTimerEvent&  other)
{
  return &( (*theWrappedObject)= other);
}

int  PythonQtWrapper_QTimerEvent::timerId(QTimerEvent* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}



PythonQtShell_QTranslator::~PythonQtShell_QTranslator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTranslator::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTranslator::childEvent(event0);
}
void PythonQtShell_QTranslator::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTranslator::customEvent(event0);
}
bool  PythonQtShell_QTranslator::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTranslator::event(event0);
}
bool  PythonQtShell_QTranslator::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTranslator::eventFilter(watched0, event1);
}
bool  PythonQtShell_QTranslator::isEmpty() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isEmpty");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTranslator::isEmpty();
}
void PythonQtShell_QTranslator::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTranslator::timerEvent(event0);
}
QString  PythonQtShell_QTranslator::translate(const char*  context0, const char*  sourceText1, const char*  disambiguation2, int  n3) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("translate");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const char*" , "const char*" , "const char*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QString returnValue{};
      void* args[5] = {nullptr, (void*)&context0, (void*)&sourceText1, (void*)&disambiguation2, (void*)&n3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("translate", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QTranslator::translate(context0, sourceText1, disambiguation2, n3);
}
QTranslator* PythonQtWrapper_QTranslator::new_QTranslator(QObject*  parent)
{ 
return new PythonQtShell_QTranslator(parent); }

const QMetaObject* PythonQtShell_QTranslator::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTranslator::staticMetaObject);
  } else {
    return &QTranslator::staticMetaObject;
  }
}
int PythonQtShell_QTranslator::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTranslator::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QTranslator::filePath(QTranslator* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

bool  PythonQtWrapper_QTranslator::isEmpty(QTranslator* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QString  PythonQtWrapper_QTranslator::language(QTranslator* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QLocale&  locale, const QString&  filename, const QString&  prefix, const QString&  directory, const QString&  suffix)
{
  return ( theWrappedObject->load(locale, filename, prefix, directory, suffix));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory, const QString&  search_delimiters, const QString&  suffix)
{
  return ( theWrappedObject->load(filename, directory, search_delimiters, suffix));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const uchar*  data, int  len, const QString&  directory)
{
  return ( theWrappedObject->load(data, len, directory));
}

QString  PythonQtWrapper_QTranslator::translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation, int  n) const
{
  return ( theWrappedObject->translate(context, sourceText, disambiguation, n));
}



QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery()
{ 
return new QUrlQuery(); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QString&  queryString)
{ 
return new QUrlQuery(queryString); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QUrl&  url)
{ 
return new QUrlQuery(url); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QUrlQuery&  other)
{ 
return new QUrlQuery(other); }

void PythonQtWrapper_QUrlQuery::addQueryItem(QUrlQuery* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->addQueryItem(key, value));
}

QStringList  PythonQtWrapper_QUrlQuery::allQueryItemValues(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->allQueryItemValues(key, encoding));
}

void PythonQtWrapper_QUrlQuery::clear(QUrlQuery* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QUrlQuery::hasQueryItem(QUrlQuery* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->hasQueryItem(key));
}

bool  PythonQtWrapper_QUrlQuery::isEmpty(QUrlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QUrlQuery::__ne__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QUrlQuery*  PythonQtWrapper_QUrlQuery::operator_assign(QUrlQuery* theWrappedObject, const QUrlQuery&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QUrlQuery::__eq__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QUrlQuery::query(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->query(encoding));
}

QString  PythonQtWrapper_QUrlQuery::queryItemValue(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->queryItemValue(key, encoding));
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QUrlQuery::queryItems(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->queryItems(encoding));
}

QChar  PythonQtWrapper_QUrlQuery::queryPairDelimiter(QUrlQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryPairDelimiter());
}

QChar  PythonQtWrapper_QUrlQuery::queryValueDelimiter(QUrlQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryValueDelimiter());
}

void PythonQtWrapper_QUrlQuery::removeAllQueryItems(QUrlQuery* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeAllQueryItems(key));
}

void PythonQtWrapper_QUrlQuery::removeQueryItem(QUrlQuery* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeQueryItem(key));
}

void PythonQtWrapper_QUrlQuery::setQuery(QUrlQuery* theWrappedObject, const QString&  queryString)
{
  ( theWrappedObject->setQuery(queryString));
}

void PythonQtWrapper_QUrlQuery::setQueryDelimiters(QUrlQuery* theWrappedObject, QChar  valueDelimiter, QChar  pairDelimiter)
{
  ( theWrappedObject->setQueryDelimiters(valueDelimiter, pairDelimiter));
}

void PythonQtWrapper_QUrlQuery::setQueryItems(QUrlQuery* theWrappedObject, const QList<QPair<QString , QString >  >&  query)
{
  ( theWrappedObject->setQueryItems(query));
}

void PythonQtWrapper_QUrlQuery::swap(QUrlQuery* theWrappedObject, QUrlQuery&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QUrlQuery::toString(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->toString(encoding));
}

QString PythonQtWrapper_QUrlQuery::py_toString(QUrlQuery* obj) { return obj->toString(); }


PythonQtShell_QUuid::~PythonQtShell_QUuid() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QUuid* PythonQtWrapper_QUuid::new_QUuid()
{ 
return new PythonQtShell_QUuid(); }

QUuid* PythonQtWrapper_QUuid::new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8)
{ 
return new PythonQtShell_QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8); }

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuid()
{
  return (QUuid::createUuid());
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV3(const QUuid&  ns, const QByteArray&  baseData)
{
  return (QUuid::createUuidV3(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV3(const QUuid&  ns, const QString&  baseData)
{
  return (QUuid::createUuidV3(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV5(const QUuid&  ns, const QByteArray&  baseData)
{
  return (QUuid::createUuidV5(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV5(const QUuid&  ns, const QString&  baseData)
{
  return (QUuid::createUuidV5(ns, baseData));
}

bool  PythonQtWrapper_QUuid::isNull(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QUuid::__ne__(QUuid* theWrappedObject, const QUuid&  orig) const
{
  return ( (*theWrappedObject)!= orig);
}

bool  PythonQtWrapper_QUuid::__lt__(QUuid* theWrappedObject, const QUuid&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QUuid::writeTo(QUuid* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QUuid::__le__(QUuid* theWrappedObject, const QUuid&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QUuid::__eq__(QUuid* theWrappedObject, const QUuid&  orig) const
{
  return ( (*theWrappedObject)== orig);
}

bool  PythonQtWrapper_QUuid::__gt__(QUuid* theWrappedObject, const QUuid&  other) const
{
  return ( (*theWrappedObject)> other);
}

bool  PythonQtWrapper_QUuid::__ge__(QUuid* theWrappedObject, const QUuid&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

void PythonQtWrapper_QUuid::readFrom(QUuid* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QByteArray  PythonQtWrapper_QUuid::toByteArray(QUuid* theWrappedObject, QUuid::StringFormat  mode) const
{
  return ( theWrappedObject->toByteArray(mode));
}

QByteArray  PythonQtWrapper_QUuid::toRfc4122(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->toRfc4122());
}

QString  PythonQtWrapper_QUuid::toString(QUuid* theWrappedObject, QUuid::StringFormat  mode) const
{
  return ( theWrappedObject->toString(mode));
}

QUuid::Variant  PythonQtWrapper_QUuid::variant(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->variant());
}

QUuid::Version  PythonQtWrapper_QUuid::version(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->version());
}

QString PythonQtWrapper_QUuid::py_toString(QUuid* obj) { return obj->toString(); }


PythonQtShell_QVariantAnimation::~PythonQtShell_QVariantAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVariantAnimation::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::childEvent(event0);
}
void PythonQtShell_QVariantAnimation::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::customEvent(event0);
}
int  PythonQtShell_QVariantAnimation::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVariantAnimation::duration();
}
bool  PythonQtShell_QVariantAnimation::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVariantAnimation::event(event0);
}
bool  PythonQtShell_QVariantAnimation::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVariantAnimation::eventFilter(watched0, event1);
}
QVariant  PythonQtShell_QVariantAnimation::interpolated(const QVariant&  from0, const QVariant&  to1, qreal  progress2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("interpolated");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&" , "const QVariant&" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue{};
      void* args[4] = {nullptr, (void*)&from0, (void*)&to1, (void*)&progress2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("interpolated", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVariantAnimation::interpolated(from0, to1, progress2);
}
void PythonQtShell_QVariantAnimation::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::timerEvent(event0);
}
void PythonQtShell_QVariantAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QVariantAnimation::updateCurrentValue(const QVariant&  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentValue");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&value0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::updateCurrentValue(value0);
}
void PythonQtShell_QVariantAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::updateDirection(direction0);
}
void PythonQtShell_QVariantAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::updateState(newState0, oldState1);
}
QVariantAnimation* PythonQtWrapper_QVariantAnimation::new_QVariantAnimation(QObject*  parent)
{ 
return new PythonQtShell_QVariantAnimation(parent); }

const QMetaObject* PythonQtShell_QVariantAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVariantAnimation::staticMetaObject);
  } else {
    return &QVariantAnimation::staticMetaObject;
  }
}
int PythonQtShell_QVariantAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVariantAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QVariant  PythonQtWrapper_QVariantAnimation::currentValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentValue());
}

QEasingCurve  PythonQtWrapper_QVariantAnimation::easingCurve(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->easingCurve());
}

QVariant  PythonQtWrapper_QVariantAnimation::endValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->endValue());
}

QVariant  PythonQtWrapper_QVariantAnimation::interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const
{
  return ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_interpolated(from, to, progress));
}

QVariant  PythonQtWrapper_QVariantAnimation::keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->keyValueAt(step));
}

QList<QPair<qreal , QVariant >  >  PythonQtWrapper_QVariantAnimation::keyValues(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->keyValues());
}

void PythonQtWrapper_QVariantAnimation::setDuration(QVariantAnimation* theWrappedObject, int  msecs)
{
  ( theWrappedObject->setDuration(msecs));
}

void PythonQtWrapper_QVariantAnimation::setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing)
{
  ( theWrappedObject->setEasingCurve(easing));
}

void PythonQtWrapper_QVariantAnimation::setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setEndValue(value));
}

void PythonQtWrapper_QVariantAnimation::setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value)
{
  ( theWrappedObject->setKeyValueAt(step, value));
}

void PythonQtWrapper_QVariantAnimation::setKeyValues(QVariantAnimation* theWrappedObject, const QList<QPair<qreal , QVariant >  >&  values)
{
  ( theWrappedObject->setKeyValues(values));
}

void PythonQtWrapper_QVariantAnimation::setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setStartValue(value));
}

QVariant  PythonQtWrapper_QVariantAnimation::startValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->startValue());
}

void PythonQtWrapper_QVariantAnimation::updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_updateCurrentValue(value));
}



QWaitCondition* PythonQtWrapper_QWaitCondition::new_QWaitCondition()
{ 
return new QWaitCondition(); }

void PythonQtWrapper_QWaitCondition::notify_all(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->notify_all());
}

void PythonQtWrapper_QWaitCondition::notify_one(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->notify_one());
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(lockedMutex, deadline));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedMutex, time));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(lockedReadWriteLock, deadline));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedReadWriteLock, time));
}

void PythonQtWrapper_QWaitCondition::wakeAll(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeAll());
}

void PythonQtWrapper_QWaitCondition::wakeOne(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeOne());
}



QWriteLocker* PythonQtWrapper_QWriteLocker::new_QWriteLocker(QReadWriteLock*  readWriteLock)
{ 
return new QWriteLocker(readWriteLock); }

QReadWriteLock*  PythonQtWrapper_QWriteLocker::readWriteLock(QWriteLocker* theWrappedObject) const
{
  return ( theWrappedObject->readWriteLock());
}

void PythonQtWrapper_QWriteLocker::relock(QWriteLocker* theWrappedObject)
{
  ( theWrappedObject->relock());
}

void PythonQtWrapper_QWriteLocker::unlock(QWriteLocker* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



PythonQtShell_QXmlStreamEntityResolver::~PythonQtShell_QXmlStreamEntityResolver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveEntity(const QString&  publicId0, const QString&  systemId1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resolveEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue{};
      void* args[3] = {nullptr, (void*)&publicId0, (void*)&systemId1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveEntity", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlStreamEntityResolver::resolveEntity(publicId0, systemId1);
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resolveUndeclaredEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue{};
      void* args[2] = {nullptr, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveUndeclaredEntity", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlStreamEntityResolver::resolveUndeclaredEntity(name0);
}
QXmlStreamEntityResolver* PythonQtWrapper_QXmlStreamEntityResolver::new_QXmlStreamEntityResolver()
{ 
return new PythonQtShell_QXmlStreamEntityResolver(); }

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->resolveEntity(publicId, systemId));
}

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->resolveUndeclaredEntity(name));
}


