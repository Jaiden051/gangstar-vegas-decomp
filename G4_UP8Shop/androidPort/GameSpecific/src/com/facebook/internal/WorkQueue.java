// Decompiled from classes.dex (SourceFile: WorkQueue.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.Settings;
class WorkQueue {
    // Fields
    static final boolean $assertionsDisabled;
    public static int DEFAULT_MAX_CONCURRENT;
    private final java.util.concurrent.Executor executor;
    private final int maxConcurrent;
    private com.facebook.internal.WorkQueue$WorkNode pendingJobs;
    private int runningCount;
    private com.facebook.internal.WorkQueue$WorkNode runningJobs;
    private final java.lang.Object workLock;

    // Methods
    static
    {
      $assertionsDisabled = !com.facebook.internal.WorkQueue.class.desiredAssertionStatus();
    }

    WorkQueue()
    {
      this(8);
    }

    WorkQueue(int p0)
    {
      this(p0, Settings.getExecutor());
    }

    WorkQueue(int p0, java.util.concurrent.Executor p1)
    {
      super();
      this.workLock = new Object();
      this.runningJobs = null;
      this.runningCount = 0;
      this.maxConcurrent = p0;
      this.executor = p1;
    }

    /* synthetic */ static void access$000(
            com.facebook.internal.WorkQueue p0,
            com.facebook.internal.WorkQueue$WorkNode p1)
    {
      p0.finishItemAndStartNew(p1);
    }

    /* synthetic */ static Object access$100(com.facebook.internal.WorkQueue p0)
    {
      return p0.workLock;
    }

    /* synthetic */ static com.facebook.internal.WorkQueue$WorkNode access$200(
            com.facebook.internal.WorkQueue p0)
    {
      return p0.pendingJobs;
    }

    /* synthetic */ static com.facebook.internal.WorkQueue$WorkNode access$202(
            com.facebook.internal.WorkQueue p0,
            com.facebook.internal.WorkQueue$WorkNode p1)
    {
      p0.pendingJobs = p1;
      return p1;
    }

    private void execute(com.facebook.internal.WorkQueue$WorkNode p0)
    {
      this.executor.execute((Runnable)new com.facebook.internal.WorkQueue$1(this, p0));
    }

    private void finishItemAndStartNew(com.facebook.internal.WorkQueue$WorkNode p0)
    {
      com.facebook.internal.WorkQueue$WorkNode pendingJobs;
      Object workLock;
      pendingJobs = null;
      workLock = this.workLock;
      synchronized ( workLock )
      {
        if ( p0 != null )
        {
          this.runningJobs = p0.removeFromList(this.runningJobs);
          --this.runningCount;
        }
        if ( this.runningCount < this.maxConcurrent )
        {
          pendingJobs = this.pendingJobs;
          if ( pendingJobs != null )
          {
            this.pendingJobs = pendingJobs.removeFromList(this.pendingJobs);
            this.runningJobs = pendingJobs.addToList(this.runningJobs, false);
            ++this.runningCount;
            pendingJobs.setIsRunning(true);
          }
        }
      }
      if ( pendingJobs != null )
        this.execute(pendingJobs);
    }

    private void startItem()
    {
      this.finishItemAndStartNew(null);
    }

    com.facebook.internal.WorkQueue$WorkItem addActiveWorkItem(Runnable p0)
    {
      return this.addActiveWorkItem(p0, true);
    }

    com.facebook.internal.WorkQueue$WorkItem addActiveWorkItem(Runnable p0, boolean p1)
    {
      com.facebook.internal.WorkQueue$WorkNode v3;
      Object workLock;
      v3 = new com.facebook.internal.WorkQueue$WorkNode(this, p0);
      workLock = this.workLock;
      synchronized ( workLock )
      {
        this.pendingJobs = v3.addToList(this.pendingJobs, p1);
      }
      this.finishItemAndStartNew(null);
      return (com.facebook.internal.WorkQueue$WorkItem)v3;
    }

    void validate()
    {
      Object workLock;
      int v2;
      com.facebook.internal.WorkQueue$WorkNode runningJobs;
      workLock = this.workLock;
      synchronized ( workLock )
      {
        v2 = 0;
        if ( this.runningJobs != null )
        {
          runningJobs = this.runningJobs;
          do
          {
            runningJobs.verify(true);
            ++v2;
            runningJobs = runningJobs.getNext();
          }
          while ( runningJobs != this.runningJobs );
        }
        if ( !$assertionsDisabled && this.runningCount != v2 )
          throw new AssertionError();
      }
    }

}
