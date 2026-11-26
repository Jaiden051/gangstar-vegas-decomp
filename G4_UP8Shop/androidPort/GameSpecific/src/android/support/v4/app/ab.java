// Decompiled from classes.dex (SourceFile: ab.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class ab implements android.widget.TabHost.TabContentFactory {
    // Fields
    private final android.content.Context a;

    // Methods
    public ab(android.content.Context p0)
    {
      super();
      this.a = p0;
    }

    public final android.view.View createTabContent(String p0)
    {
      android.view.View v2;
      v2 = new android.view.View(this.a);
      v2.setMinimumWidth(0);
      v2.setMinimumHeight(0);
      return v2;
    }

}
