// Decompiled from classes.dex (SourceFile: LikeActionController$AbstractRequestWrapper$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$AbstractRequestWrapper$1 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.internal.LikeActionController$AbstractRequestWrapper this$1;

    // Methods
    LikeActionController$AbstractRequestWrapper$1(com.facebook.internal.LikeActionController$AbstractRequestWrapper p0)
    {
      super();
      this.this$1 = p0;
    
    }

    public void onCompleted(com.facebook.Response p0)
    {
      this.this$1.error = p0.getError();
      if ( this.this$1.error != null )
        this.this$1.processError(this.this$1.error);
      else
        this.this$1.processSuccess(p0);
    }

}
