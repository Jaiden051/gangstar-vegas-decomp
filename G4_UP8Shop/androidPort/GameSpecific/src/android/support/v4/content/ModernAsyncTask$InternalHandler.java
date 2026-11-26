// Decompiled from classes.dex (SourceFile: ModernAsyncTask$InternalHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class ModernAsyncTask$InternalHandler extends android.os.Handler {
    // Methods
    private ModernAsyncTask$InternalHandler()
    {
      super();
    }

    /* synthetic */ ModernAsyncTask$InternalHandler(android.support.v4.content.ModernAsyncTask$1 p0)
    {
      this();
    }

    public void handleMessage(android.os.Message p0)
    {
      android.support.v4.content.ModernAsyncTask$AsyncTaskResult v2;
      v2 = (android.support.v4.content.ModernAsyncTask$AsyncTaskResult)p0.obj;
      switch ( p0.what )
      {
        case 1:
          ModernAsyncTask.access$500(v2.mTask, v2.mData[0]);
          break;
        case 2:
          v2.mTask.onProgressUpdate(v2.mData);
          break;
        default:
          return;
      }
    }

}
