// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.print;

final class f extends android.os.AsyncTask {
    // Fields
    final android.os.CancellationSignal a;
    final android.print.PrintAttributes b;
    final android.print.PrintAttributes c;
    final android.print.PrintDocumentAdapter.LayoutResultCallback d;
    final android.support.v4.print.PrintHelperKitkat$2 e;

    // Methods
    f(
            android.support.v4.print.PrintHelperKitkat$2 p0,
            android.os.CancellationSignal p1,
            android.print.PrintAttributes p2,
            android.print.PrintAttributes p3,
            android.print.PrintDocumentAdapter.LayoutResultCallback p4)
    {
      super();
      this.e = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    
    }

    private android.graphics.Bitmap a()
    {
      try
      {
        return PrintHelperKitkat.access$200(this.e.f, this.e.d, 3500);
      }
      catch ( java.io.FileNotFoundException e )
      {
        return null;
      }
    }

    private void a(android.graphics.Bitmap p0)
    {
      super.onPostExecute(p0);
      this.e.b = p0;
      if ( p0 != null )
        this.d.onLayoutFinished(new android.print.PrintDocumentInfo.Builder(this.e.c).setContentType(1).setPageCount(1).build(), !this.b.equals(this.c));
      else
        this.d.onLayoutFailed(null);
    }

    private void b()
    {
      this.d.onLayoutCancelled();
    }

    /* synthetic */ protected final Object doInBackground(Object[] p0)
    {
      return this.a();
    }

    /* synthetic */ protected final void onCancelled(Object p0)
    {
      this.d.onLayoutCancelled();
    }

    /* synthetic */ protected final void onPostExecute(Object p0)
    {
      android.graphics.Bitmap v2;
      v2 = (android.graphics.Bitmap)p0;
      super.onPostExecute(v2);
      this.e.b = v2;
      if ( v2 != null )
        this.d.onLayoutFinished(new android.print.PrintDocumentInfo.Builder(this.e.c).setContentType(1).setPageCount(1).build(), !this.b.equals(this.c));
      else
        this.d.onLayoutFailed(null);
    }

    protected final void onPreExecute()
    {
      this.a.setOnCancelListener((android.os.CancellationSignal.OnCancelListener)new android.support.v4.print.g(this));
    }

}
