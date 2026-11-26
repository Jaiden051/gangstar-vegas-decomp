// Decompiled from classes.dex (SourceFile: WorkQueue$WorkNode.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class WorkQueue$WorkNode implements com.facebook.internal.WorkQueue$WorkItem {
    // Fields
    static final boolean $assertionsDisabled;
    private final java.lang.Runnable callback;
    private boolean isRunning;
    private com.facebook.internal.WorkQueue$WorkNode next;
    private com.facebook.internal.WorkQueue$WorkNode prev;
    final com.facebook.internal.WorkQueue this$0;

    // Methods
    static
    {
      $assertionsDisabled = !com.facebook.internal.WorkQueue.class.desiredAssertionStatus();
    }

    WorkQueue$WorkNode(com.facebook.internal.WorkQueue p0, Runnable p1)
    {
      super();
      this.this$0 = p0;
      this.callback = p1;
    
    }

    com.facebook.internal.WorkQueue$WorkNode addToList(
            com.facebook.internal.WorkQueue$WorkNode p0,
            boolean p1)
    {
      com.facebook.internal.WorkQueue$WorkNode v3;
      if ( !$assertionsDisabled && this.next != null )
        throw new AssertionError();
      if ( !$assertionsDisabled && this.prev != null )
        throw new AssertionError();
      if ( p0 != null )
      {
        this.next = p0;
        this.prev = p0.prev;
        this.prev.next = this;
        this.next.prev = this;
        v3 = p0;
      }
      else
      {
        this.prev = this;
        this.next = this;
        v3 = this;
      }
      if ( !p1 )
        return v3;
      return this;
    }

    public boolean cancel()
    {
      com.facebook.internal.WorkQueue v1;
      Object v2; // RETVAL
      Object v3;
      boolean v4;
      v1 = this.this$0;
      v2 = WorkQueue.access$100(v1);
      v3 = v2;
      synchronized ( v3 )
      {
        if ( this.isRunning() )
        {
          com.gameloft.android.DecompRT.monitorExit(v3);
          return false;
        }
        else
        {
          WorkQueue.access$202(this.this$0, this.removeFromList(WorkQueue.access$200(this.this$0)));
          v4 = true;
          com.gameloft.android.DecompRT.monitorExit(v3);
        }
        return v4;
      }
    }

    Runnable getCallback()
    {
      return this.callback;
    }

    com.facebook.internal.WorkQueue$WorkNode getNext()
    {
      return this.next;
    }

    public boolean isRunning()
    {
      return this.isRunning;
    }

    public void moveToFront()
    {
      Object v1; // RETVAL
      Object v2;
      v1 = WorkQueue.access$100(this.this$0);
      v2 = v1;
      synchronized ( v2 )
      {
        if ( !this.isRunning() )
        {
          WorkQueue.access$202(this.this$0, this.removeFromList(WorkQueue.access$200(this.this$0)));
          WorkQueue.access$202(this.this$0, this.addToList(WorkQueue.access$200(this.this$0), true));
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

    com.facebook.internal.WorkQueue$WorkNode removeFromList(com.facebook.internal.WorkQueue$WorkNode p0)
    {
      if ( !$assertionsDisabled && this.next == null )
        throw new AssertionError();
      if ( !$assertionsDisabled && this.prev == null )
        throw new AssertionError();
      if ( p0 == this )
      {
        if ( this.next == this )
          p0 = null;
        else
          p0 = this.next;
      }
      this.next.prev = this.prev;
      this.prev.next = this.next;
      this.prev = null;
      this.next = null;
      return p0;
    }

    void setIsRunning(boolean p0)
    {
      this.isRunning = p0;
    }

    void verify(boolean p0)
    {
      if ( !$assertionsDisabled && this.prev.next != this )
        throw new AssertionError();
      if ( !$assertionsDisabled && this.next.prev != this )
        throw new AssertionError();
      if ( !$assertionsDisabled && this.isRunning() != p0 )
        throw new AssertionError();
    }

}
