// Decompiled from classes.dex (SourceFile: SessionTracker$CallbackWrapper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class SessionTracker$CallbackWrapper implements com.facebook.Session$StatusCallback {
    // Fields
    final com.facebook.internal.SessionTracker this$0;
    private final com.facebook.Session$StatusCallback wrapped;

    // Methods
    public SessionTracker$CallbackWrapper(com.facebook.internal.SessionTracker p0, com.facebook.Session$StatusCallback p1)
    {
      super();
      this.this$0 = p0;
      this.wrapped = p1;
    
    }

    public void call(com.facebook.Session p0, com.facebook.SessionState p1, Exception p2)
    {
      if ( this.wrapped != null && this.this$0.isTracking() )
        this.wrapped.call(p0, p1, p2);
      if ( p0 == SessionTracker.access$200(this.this$0) && p1.isClosed() )
        this.this$0.setSession(null);
    }

}
