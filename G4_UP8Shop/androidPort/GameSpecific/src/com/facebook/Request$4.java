// Decompiled from classes.dex (SourceFile: Request$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class Request$4 implements java.lang.Runnable {
    // Fields
    final java.util.ArrayList val$callbacks;
    final com.facebook.RequestBatch val$requests;

    // Methods
    Request$4(java.util.ArrayList p0, com.facebook.RequestBatch p1)
    {
      super();
      this.val$callbacks = p0;
      this.val$requests = p1;
    
    }

    public final void run()
    {
      java.util.Iterator v1;
      android.util.Pair v2;
      java.util.Iterator i;
      v1 = this.val$callbacks.iterator();
      while ( v1.hasNext() )
      {
        v2 = (android.util.Pair)v1.next();
        ((com.facebook.Request$Callback)v2.first).onCompleted((com.facebook.Response)v2.second);
      }
      for ( i = this.val$requests.getCallbacks().iterator();
            i.hasNext();
            ((com.facebook.RequestBatch$Callback)i.next()).onBatchCompleted(this.val$requests) )
      {
        ;
      }
    }

}
