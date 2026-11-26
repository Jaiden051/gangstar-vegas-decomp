// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.print;

final class g implements android.os.CancellationSignal.OnCancelListener {
    // Fields
    final android.support.v4.print.f a;

    // Methods
    g(android.support.v4.print.f p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onCancel()
    {
      PrintHelperKitkat$2.access$100(this.a.e);
      this.a.cancel(false);
    }

}
