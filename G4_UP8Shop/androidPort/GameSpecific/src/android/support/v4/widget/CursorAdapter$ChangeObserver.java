// Decompiled from classes.dex (SourceFile: CursorAdapter$ChangeObserver.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class CursorAdapter$ChangeObserver extends android.database.ContentObserver {
    // Fields
    final android.support.v4.widget.CursorAdapter this$0;

    // Methods
    public CursorAdapter$ChangeObserver(android.support.v4.widget.CursorAdapter p0)
    {
      super(new android.os.Handler());
      this.this$0 = p0;
    
    }

    public boolean deliverSelfNotifications()
    {
      return true;
    }

    public void onChange(boolean p0)
    {
      this.this$0.onContentChanged();
    }

}
