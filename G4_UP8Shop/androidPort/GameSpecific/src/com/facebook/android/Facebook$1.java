// Decompiled from classes.dex (SourceFile: Facebook$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

class Facebook$1 implements com.facebook.Session$StatusCallback {
    // Fields
    final com.facebook.android.Facebook this$0;
    final com.facebook.android.Facebook$DialogListener val$listener;

    // Methods
    Facebook$1(com.facebook.android.Facebook p0, com.facebook.android.Facebook$DialogListener p1)
    {
      super();
      this.this$0 = p0;
      this.val$listener = p1;
    
    }

    public void call(com.facebook.Session p0, com.facebook.SessionState p1, Exception p2)
    {
      Facebook.access$000(this.this$0, p0, p1, p2, this.val$listener);
    }

}
