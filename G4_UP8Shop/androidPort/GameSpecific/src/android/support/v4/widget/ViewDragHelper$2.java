// Decompiled from classes.dex (SourceFile: ViewDragHelper$2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class ViewDragHelper$2 implements java.lang.Runnable {
    // Fields
    final android.support.v4.widget.ViewDragHelper this$0;

    // Methods
    ViewDragHelper$2(android.support.v4.widget.ViewDragHelper p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void run()
    {
      this.this$0.setDragState(0);
    }

}
