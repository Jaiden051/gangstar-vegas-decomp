// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.print;

import android.print.PageRange;
import android.util.Log;
final class e extends android.print.PrintDocumentAdapter {
    // Fields
    final java.lang.String a;
    final android.graphics.Bitmap b;
    final int c;
    final android.support.v4.print.PrintHelperKitkat d;
    private android.print.PrintAttributes e;

    // Methods
    e(android.support.v4.print.PrintHelperKitkat p0, String p1, android.graphics.Bitmap p2, int p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    public final void onLayout(
            android.print.PrintAttributes p0,
            android.print.PrintAttributes p1,
            android.os.CancellationSignal p2,
            android.print.PrintDocumentAdapter.LayoutResultCallback p3,
            android.os.Bundle p4)
    {
      this.e = p1;
      p3.onLayoutFinished(new android.print.PrintDocumentInfo.Builder(this.a).setContentType(1).setPageCount(1).build(), !p1.equals(p0));
    }

    public final void onWrite(
            android.print.PageRange[] p0,
            android.os.ParcelFileDescriptor p1,
            android.os.CancellationSignal p2,
            android.print.PrintDocumentAdapter.WriteResultCallback p3)
    {
      android.print.pdf.PrintedPdfDocument v5;
      android.graphics.pdf.PdfDocument.Page started;
      android.print.PageRange[] v7;
      v5 = new android.print.pdf.PrintedPdfDocument(this.d.a, this.e);
      try
      {
        started = v5.startPage(1);
        started.getCanvas().drawBitmap(this.b, PrintHelperKitkat.access$000(
                                                 this.d,
                                                 this.b.getWidth(),
                                                 this.b.getHeight(),
                                                 new android.graphics.RectF(started.getInfo().getContentRect()),
                                                 this.c), null);
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
