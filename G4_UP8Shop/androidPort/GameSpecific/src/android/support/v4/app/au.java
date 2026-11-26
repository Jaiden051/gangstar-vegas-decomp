// Decompiled from classes.dex (SourceFile: au.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public abstract class au {
    // Fields
    android.support.v4.app.an d;
    java.lang.CharSequence e;
    java.lang.CharSequence f;
    boolean g;

    // Methods
    public au()
    {
      super();
      this.g = false;
    }

    private android.app.Notification a()
    {
      android.app.Notification v1;
      v1 = null;
      if ( this.d != null )
        return NotificationCompat.access$000().a(this.d);
      return v1;
    }

    public final void a(android.support.v4.app.an p0)
    {
      android.support.v4.app.an d;
      if ( this.d != p0 )
      {
        this.d = p0;
        if ( this.d != null )
        {
          d = this.d;
          if ( d.l != this )
          {
            d.l = this;
            if ( d.l != null )
              d.l.a(d);
          }
        }
      }
    }

}
