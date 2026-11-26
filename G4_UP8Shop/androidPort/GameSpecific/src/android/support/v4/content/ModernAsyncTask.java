// Decompiled from classes.dex (SourceFile: ModernAsyncTask.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import java.util.concurrent.TimeUnit;
abstract class ModernAsyncTask<Params, Progress, Result> {
    // Fields
    private static int CORE_POOL_SIZE;
    private static int KEEP_ALIVE;
    private static java.lang.String LOG_TAG;
    private static int MAXIMUM_POOL_SIZE;
    private static int MESSAGE_POST_PROGRESS;
    private static int MESSAGE_POST_RESULT;
    public static final java.util.concurrent.Executor THREAD_POOL_EXECUTOR;
    private static volatile java.util.concurrent.Executor sDefaultExecutor;
    private static final android.support.v4.content.ModernAsyncTask$InternalHandler sHandler;
    private static final java.util.concurrent.BlockingQueue sPoolWorkQueue;
    private static final java.util.concurrent.ThreadFactory sThreadFactory;
    private final java.util.concurrent.FutureTask mFuture;
    private volatile android.support.v4.content.ModernAsyncTask$Status mStatus;
    private final java.util.concurrent.atomic.AtomicBoolean mTaskInvoked;
    private final android.support.v4.content.ModernAsyncTask$WorkerRunnable mWorker;

    // Methods
    static
    {
      sThreadFactory = (java.util.concurrent.ThreadFactory)new android.support.v4.content.ModernAsyncTask$1();
      sPoolWorkQueue = new java.util.concurrent.LinkedBlockingQueue(10);
      THREAD_POOL_EXECUTOR = new java.util.concurrent.ThreadPoolExecutor(5, 128, 1, TimeUnit.SECONDS, sPoolWorkQueue, sThreadFactory);
      sHandler = new android.support.v4.content.ModernAsyncTask$InternalHandler(null);
      sDefaultExecutor = THREAD_POOL_EXECUTOR;
    }

    public ModernAsyncTask()
    {
      super();
      this.mStatus = ModernAsyncTask$Status.PENDING;
      this.mTaskInvoked = new java.util.concurrent.atomic.AtomicBoolean();
      this.mWorker = new android.support.v4.content.ModernAsyncTask$2(this);
      this.mFuture = new android.support.v4.content.ModernAsyncTask$3(this, (java.util.concurrent.Callable)this.mWorker);
    }

    /* synthetic */ static java.util.concurrent.atomic.AtomicBoolean access$200(
            android.support.v4.content.ModernAsyncTask p0)
    {
      return p0.mTaskInvoked;
    }

    /* synthetic */ static Object access$300(android.support.v4.content.ModernAsyncTask p0, Object p1)
    {
      return p0.postResult(p1);
    }

    /* synthetic */ static void access$400(android.support.v4.content.ModernAsyncTask p0, Object p1)
    {
      p0.postResultIfNotInvoked(p1);
    }

    /* synthetic */ static void access$500(android.support.v4.content.ModernAsyncTask p0, Object p1)
    {
      p0.finish(p1);
    }

    public static void execute(Runnable p0)
    {
      java.util.concurrent.Executor v1;
      v1 = sDefaultExecutor;
      v1.execute(p0);
    }

    private void finish(Result p0)
    {
      if ( this.isCancelled() )
        this.onCancelled(p0);
      else
        this.onPostExecute(p0);
      this.mStatus = ModernAsyncTask$Status.FINISHED;
    }

    public static void init()
    {
      sHandler.getLooper();
    }

    private Result postResult(Result p0)
    {
      Object[] v2;
      v2 = new Object[1];
      v2[0] = p0;
      sHandler.obtainMessage(1, new android.support.v4.content.ModernAsyncTask$AsyncTaskResult(this, v2)).sendToTarget();
      return p0;
    }

    private void postResultIfNotInvoked(Result p0)
    {
      if ( !this.mTaskInvoked.get() )
        this.postResult(p0);
    }

    public static void setDefaultExecutor(java.util.concurrent.Executor p0)
    {
      sDefaultExecutor = p0;
    }

    public final boolean cancel(boolean p0)
    {
      return this.mFuture.cancel(p0);
    }

    protected abstract java.lang.Object doInBackground(java.lang.Object[] p0);

    public final android.support.v4.content.ModernAsyncTask<Params, Progress, Result> execute(Params[] p0)
    {
      java.util.concurrent.Executor v2;
      v2 = sDefaultExecutor;
      return this.executeOnExecutor(v2, p0);
    }

    public final android.support.v4.content.ModernAsyncTask<Params, Progress, Result> executeOnExecutor(
            java.util.concurrent.Executor p0,
            Params[] p1)
    {
      android.support.v4.content.ModernAsyncTask$Status mStatus;
      android.support.v4.content.ModernAsyncTask$Status v4;
      mStatus = this.mStatus;
      if ( mStatus != ModernAsyncTask$Status.PENDING )
      {
        v4 = this.mStatus;
        switch ( ModernAsyncTask$4.$SwitchMap$android$support$v4$content$ModernAsyncTask$Status[v4.ordinal()] )
        {
          case 1:
            throw new IllegalStateException("Cannot execute task: the task is already running.");
          case 2:
            throw new IllegalStateException("Cannot execute task: the task has already been executed (a task can be executed only once)");
          default:
            break;
        }
      }
      this.mStatus = ModernAsyncTask$Status.RUNNING;
      this.onPreExecute();
      this.mWorker.mParams = p1;
      p0.execute(this.mFuture);
      return this;
    }

    public final Result get() throws InterruptedException, java.util.concurrent.ExecutionException
    {
      return (Result)this.mFuture.get();
    }

    public final Result get(long p0, java.util.concurrent.TimeUnit p2) throws InterruptedException, java.util.concurrent.ExecutionException, java.util.concurrent.TimeoutException
    {
      return (Result)this.mFuture.get(p0, p2);
    }

    public final android.support.v4.content.ModernAsyncTask$Status getStatus()
    {
      return this.mStatus;
    }

    public final boolean isCancelled()
    {
      return this.mFuture.isCancelled();
    }

    protected void onCancelled()
    {
      ;
    }

    protected void onCancelled(Result p0)
    {
      this.onCancelled();
    }

    protected void onPostExecute(Result p0)
    {
      ;
    }

    protected void onPreExecute()
    {
      ;
    }

    protected void onProgressUpdate(Progress[] p0)
    {
      ;
    }

    protected final void publishProgress(Progress[] p0)
    {
      if ( !this.isCancelled() )
        sHandler.obtainMessage(2, new android.support.v4.content.ModernAsyncTask$AsyncTaskResult(this, p0)).sendToTarget();
    }

}
