// Decompiled from classes.dex (SourceFile: ModernAsyncTask$3.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.os.AsyncTask;
import android.util.Log;
class ModernAsyncTask$3 extends java.util.concurrent.FutureTask {
    // Fields
    final android.support.v4.content.ModernAsyncTask this$0;

    // Methods
    ModernAsyncTask$3(android.support.v4.content.ModernAsyncTask p0, java.util.concurrent.Callable p1)
    {
      super(p1);
      this.this$0 = p0;
    
    }

    protected void done()
    {
      try
      {
        ModernAsyncTask.access$400(this.this$0, this.get());
      }
      catch ( InterruptedException v1 )
      {
        Log.w("AsyncTask", v1);
      }
      catch ( java.util.concurrent.ExecutionException v2 )
      {
        throw new RuntimeException("An error occured while executing doInBackground()", v2.getCause());
      }
      catch ( java.util.concurrent.CancellationException e )
      {
        ModernAsyncTask.access$400(this.this$0, null);
      }
      catch ( Throwable v3 )
      {
        throw new RuntimeException("An error occured while executing doInBackground()", v3);
      }
    }

}
