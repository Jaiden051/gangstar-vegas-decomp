// Decompiled from classes.dex (SourceFile: Session$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$4 implements java.lang.Runnable {
    // Fields
    final com.facebook.Session this$0;
    final java.lang.Exception val$exception;
    final com.facebook.SessionState val$newState;

    // Methods
    Session$4(com.facebook.Session p0, com.facebook.SessionState p1, Exception p2)
    {
      super();
      this.this$0 = p0;
      this.val$newState = p1;
      this.val$exception = p2;
    
    }

    public void run()
    {
      java.util.List v1; // RETVAL
      Object v2;
      java.util.Iterator i;
      v1 = Session.access$1200(this.this$0);
      v2 = v1;
      synchronized ( v2 )
      {
        for ( i = Session.access$1200(this.this$0).iterator();
              i.hasNext();
              Session.access$1400(
                Session.access$1300(this.this$0),
                (Runnable)new com.facebook.Session$4$1(this, (com.facebook.Session$StatusCallback)i.next())) )
        {
          ;
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

}
