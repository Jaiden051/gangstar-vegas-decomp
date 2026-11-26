// Decompiled from classes.dex (SourceFile: ViewPager$3.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewPager$3 implements java.lang.Runnable {
    // Fields
    final android.support.v4.view.ViewPager this$0;

    // Methods
    ViewPager$3(android.support.v4.view.ViewPager p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void run()
    {
      ViewPager.access$000(this.this$0, 0);
      this.this$0.populate();
    }

}
