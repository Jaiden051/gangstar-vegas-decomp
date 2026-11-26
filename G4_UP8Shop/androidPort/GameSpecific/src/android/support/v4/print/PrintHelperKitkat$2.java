// Decompiled from classes.dex (SourceFile: PrintHelperKitkat$2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.print;

import android.print.PageRange;
import android.util.Log;
class PrintHelperKitkat$2 extends android.print.PrintDocumentAdapter {
    // Fields
    android.os.AsyncTask a;
    android.graphics.Bitmap b;
    final java.lang.String c;
    final android.net.Uri d;
    final int e;
    final android.support.v4.print.PrintHelperKitkat f;
    private android.print.PrintAttributes g;

    // Methods
    PrintHelperKitkat$2(android.support.v4.print.PrintHelperKitkat p0, String p1, android.net.Uri p2, int p3)
    {
      super();
      this.f = p0;
      this.c = p1;
      this.d = p2;
      this.e = p3;
      this.b = null;
    
    }

    private void a()
    {
      Object v1; // RETVAL
    
      v1 = PrintHelperKitkat.access$300(this.f);
      synchronized ( v1 )
      {
        if ( this.f.b != null )
        {
          this.f.b.requestCancelDecode();
          this.f.b = null;
        }
      }
    }

    /* synthetic */ static void access$100(android.support.v4.print.PrintHelperKitkat$2 p0)
    {
      p0.a();
    }

    public void onFinish()
    {
      super.onFinish();
      this.a();
      this.a.cancel(true);
    }

    public void onLayout(
            android.print.PrintAttributes p0,
            android.print.PrintAttributes p1,
            android.os.CancellationSignal p2,
            android.print.PrintDocumentAdapter.LayoutResultCallback p3,
            android.os.Bundle p4)
    {
      if ( p2.isCanceled() )
      {
        p3.onLayoutCancelled();
        this.g = p1;
      }
      else if ( this.b != null )
      {
        p3.onLayoutFinished(new android.print.PrintDocumentInfo.Builder(this.c).setContentType(1).setPageCount(1).build(), !p1.equals(p0));
      }
      else
      {
        this.a = new android.support.v4.print.f(this, p2, p1, p0, p3);
        this.a.execute(new android.net.Uri[0]);
        this.g = p1;
      }
    }

    public void onWrite(
            android.print.PageRange[] p0,
            android.os.ParcelFileDescriptor p1,
            android.os.CancellationSignal p2,
            android.print.PrintDocumentAdapter.WriteResultCallback p3)
    {
      android.print.pdf.PrintedPdfDocument v5;
      android.graphics.pdf.PdfDocument.Page started;
      android.print.PageRange[] v7;
      v5 = new android.print.pdf.PrintedPdfDocument(this.f.a, this.g);
      try
      {
        started = v5.startPage(1);
        started.getCanvas().drawBitmap(this.b, PrintHelperKitkat.access$000(
                                                 this.f,
                                                 this.b.getWidth(),
                                                 this.b.getHeight(),
                                                 new android.graphics.RectF(started.getInfo().getContentRect()),
                                                 this.e), null);
        v5.finishPage(started);
        try
        {
          v5.writeTo(new java.io.FileOutputStream(p1.getFileDescriptor()));
          v7 = new android.print.PageRange[1];
          v7[0] = PageRange.ALL_PAGES;
          p3.onWriteFinished(v7);
        }
        catch ( java.io.IOException v8 )
        {
          Log.e("PrintHelperKitkat", "Error writing printed content", v8);
          p3.onWriteFailed(null);
        }
      }
      catch ( Throwable v9 )
      {
        v5.close();
        if ( p1 != null )
        {
          try
          {
            p1.close();
          }
          catch ( java.io.IOException e )
          {
          }
        }
        throw v9;
      }
      v5.close();
      if ( p1 != null )
      {
        try
        {
          p1.close();
        }
        catch ( java.io.IOException e )
        {
        }
      }
    }

}
