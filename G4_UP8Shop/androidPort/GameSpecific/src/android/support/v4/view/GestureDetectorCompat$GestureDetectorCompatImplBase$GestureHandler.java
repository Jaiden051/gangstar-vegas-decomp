// Decompiled from classes.dex (SourceFile: GestureDetectorCompat$GestureDetectorCompatImplBase$GestureHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class GestureDetectorCompat$GestureDetectorCompatImplBase$GestureHandler extends android.os.Handler {
    // Fields
    final android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase this$0;

    // Methods
    GestureDetectorCompat$GestureDetectorCompatImplBase$GestureHandler(android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase p0)
    {
      super();
      this.this$0 = p0;
    
    }

    GestureDetectorCompat$GestureDetectorCompatImplBase$GestureHandler(android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase p0, android.os.Handler p1)
    {
      super(p1.getLooper());
      this.this$0 = p0;
    
    }

    public void handleMessage(android.os.Message p0)
    {
      switch ( p0.what )
      {
        case 1:
          GestureDetectorCompat$GestureDetectorCompatImplBase.access$100(this.this$0).onShowPress(GestureDetectorCompat$GestureDetectorCompatImplBase.access$000(this.this$0));
          break;
        case 2:
          GestureDetectorCompat$GestureDetectorCompatImplBase.access$200(this.this$0);
          break;
        case 3:
          if ( GestureDetectorCompat$GestureDetectorCompatImplBase.access$300(this.this$0) != null )
          {
            if ( GestureDetectorCompat$GestureDetectorCompatImplBase.access$400(this.this$0) )
              GestureDetectorCompat$GestureDetectorCompatImplBase.access$502(this.this$0, true);
            else
              GestureDetectorCompat$GestureDetectorCompatImplBase.access$300(this.this$0).onSingleTapConfirmed(GestureDetectorCompat$GestureDetectorCompatImplBase.access$000(this.this$0));
          }
          break;
        default:
          throw new RuntimeException("Unknown message " + p0);
      }
    }

}
