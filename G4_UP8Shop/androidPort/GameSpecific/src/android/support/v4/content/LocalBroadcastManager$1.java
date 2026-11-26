// Decompiled from classes.dex (SourceFile: LocalBroadcastManager$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class LocalBroadcastManager$1 extends android.os.Handler {
    // Fields
    final android.support.v4.content.LocalBroadcastManager this$0;

    // Methods
    LocalBroadcastManager$1(android.support.v4.content.LocalBroadcastManager p0, android.os.Looper p1)
    {
      super(p1);
      this.this$0 = p0;
    
    }

    public void handleMessage(android.os.Message p0)
    {
      if ( p0.what == 1 )
        LocalBroadcastManager.access$000(this.this$0);
      else
        super.handleMessage(p0);
    }

}
