// Decompiled from classes.dex (SourceFile: LikeView$LikeActionControllerCreationCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class LikeView$LikeActionControllerCreationCallback implements com.facebook.internal.LikeActionController$CreationCallback {
    // Fields
    private boolean isCancelled;
    final com.facebook.widget.LikeView this$0;

    // Methods
    private LikeView$LikeActionControllerCreationCallback(com.facebook.widget.LikeView p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ LikeView$LikeActionControllerCreationCallback(
            com.facebook.widget.LikeView p0,
            com.facebook.widget.LikeView$1 p1)
    {
      this(p0);
    }

    public void cancel()
    {
      this.isCancelled = true;
    }

    public void onComplete(com.facebook.internal.LikeActionController p0)
    {
      if ( !this.isCancelled )
      {
        LikeView.access$1000(this.this$0, p0);
        LikeView.access$700(this.this$0);
        LikeView.access$1102(this.this$0, null);
      }
    }

}
