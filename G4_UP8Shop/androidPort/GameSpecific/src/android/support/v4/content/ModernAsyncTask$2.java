// Decompiled from classes.dex (SourceFile: ModernAsyncTask$2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.os.Process;
class ModernAsyncTask$2<Params, Result> extends android.support.v4.content.ModernAsyncTask$WorkerRunnable<Params, Result> {
    // Fields
    final android.support.v4.content.ModernAsyncTask this$0;

    // Methods
    ModernAsyncTask$2(android.support.v4.content.ModernAsyncTask p0)
    {
      super(null);
      this.this$0 = p0;
    
    }

    public Result call()
    {
      ModernAsyncTask.access$200(this.this$0).set(true);
      Process.setThreadPriority(10);
      return (Result)ModernAsyncTask.access$300(this.this$0, this.this$0.doInBackground(this.mParams));
    }

}
