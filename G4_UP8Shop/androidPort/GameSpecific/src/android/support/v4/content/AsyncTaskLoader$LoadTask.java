// Decompiled from classes.dex (SourceFile: AsyncTaskLoader$LoadTask.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

final class AsyncTaskLoader$LoadTask<D> extends android.support.v4.content.ModernAsyncTask<Void, Void, D> implements java.lang.Runnable {
    // Fields
    private java.util.concurrent.CountDownLatch done;
    java.lang.Object result;
    final android.support.v4.content.AsyncTaskLoader this$0;
    boolean waiting;

    // Methods
    AsyncTaskLoader$LoadTask(android.support.v4.content.AsyncTaskLoader p0)
    {
      super();
      this.this$0 = p0;
      this.done = new java.util.concurrent.CountDownLatch(1);
    
    }

    /* synthetic */ static java.util.concurrent.CountDownLatch access$000(
            android.support.v4.content.AsyncTaskLoader$LoadTask p0)
    {
      return p0.done;
    }

    /* bridge */ protected final Object doInBackground(Object[] p0)
    {
      return this.doInBackground/* Object */((Void[])p0);
    }

    protected final D doInBackground(Void[] p0)
    {
      this.result = this.this$0.onLoadInBackground();
      return (D)this.result;
    }

    protected final void onCancelled()
    {
      try
      {
        this.this$0.dispatchOnCancelled(this, this.result);
      }
      finally
      {
        this.done.countDown();
      }
    }

    protected final void onPostExecute(D p0)
    {
      try
      {
        this.this$0.dispatchOnLoadComplete(this, p0);
      }
      finally
      {
        this.done.countDown();
      }
    }

    public final void run()
    {
      this.waiting = false;
      this.this$0.executePendingTask();
    }

}
