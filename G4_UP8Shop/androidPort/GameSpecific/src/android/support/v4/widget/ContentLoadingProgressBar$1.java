// Decompiled from classes.dex (SourceFile: ContentLoadingProgressBar$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class ContentLoadingProgressBar$1 implements java.lang.Runnable {
    // Fields
    final android.support.v4.widget.ContentLoadingProgressBar this$0;

    // Methods
    ContentLoadingProgressBar$1(android.support.v4.widget.ContentLoadingProgressBar p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void run()
    {
      ContentLoadingProgressBar.access$002(this.this$0, false);
      ContentLoadingProgressBar.access$102(this.this$0, -1);
      this.this$0.setVisibility(8);
    }

}
