// Decompiled from classes.dex (SourceFile: Loader$ForceLoadContentObserver.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

public final class Loader$ForceLoadContentObserver extends android.database.ContentObserver {
    // Fields
    final android.support.v4.content.Loader this$0;

    // Methods
    public Loader$ForceLoadContentObserver(android.support.v4.content.Loader p0)
    {
      super(new android.os.Handler());
      this.this$0 = p0;
    
    }

    public final boolean deliverSelfNotifications()
    {
      return true;
    }

    public final void onChange(boolean p0)
    {
      this.this$0.onContentChanged();
    }

}
