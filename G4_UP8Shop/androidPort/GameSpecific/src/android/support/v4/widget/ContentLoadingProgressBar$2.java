// Decompiled from classes.dex (SourceFile: ContentLoadingProgressBar$2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class ContentLoadingProgressBar$2 implements java.lang.Runnable {
    // Fields
    final android.support.v4.widget.ContentLoadingProgressBar this$0;

    // Methods
    ContentLoadingProgressBar$2(android.support.v4.widget.ContentLoadingProgressBar p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void run()
    {
      ContentLoadingProgressBar.access$202(this.this$0, false);
      if ( !ContentLoadingProgressBar.access$300(this.this$0) )
      {
        ContentLoadingProgressBar.access$102(this.this$0, System.currentTimeMillis());
        this.this$0.setVisibility(0);
      }
    }

}
