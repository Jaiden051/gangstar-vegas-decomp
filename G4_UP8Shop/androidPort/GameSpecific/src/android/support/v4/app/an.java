// Decompiled from classes.dex (SourceFile: an.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public final class an {
    // Fields
    android.content.Context a;
    java.lang.CharSequence b;
    java.lang.CharSequence c;
    android.app.PendingIntent d;
    android.app.PendingIntent e;
    android.widget.RemoteViews f;
    android.graphics.Bitmap g;
    java.lang.CharSequence h;
    int i;
    int j;
    boolean k;
    android.support.v4.app.au l;
    java.lang.CharSequence m;
    int n;
    int o;
    boolean p;
    java.util.ArrayList q;
    android.app.Notification r;

    // Methods
    private an(android.content.Context p0)
    {
      super();
      this.q = new java.util.ArrayList();
      this.r = new android.app.Notification();
      this.a = p0;
      this.r.when = System.currentTimeMillis();
      this.r.audioStreamType = -1;
      this.j = 0;
    }

    private android.support.v4.app.an a(int p0)
    {
      this.r.icon = p0;
      return this;
    }

    private android.support.v4.app.an a(int p0, int p1)
    {
      this.r.icon = p0;
      this.r.iconLevel = p1;
      return this;
    }

    private android.support.v4.app.an a(int p0, int p1, int p2)
    {
      int v4;
      boolean v5;
      android.app.Notification r;
      int v7;
      v4 = 1;
      this.r.ledARGB = p0;
      this.r.ledOnMS = p1;
      this.r.ledOffMS = p2;
      v5 = this.r.ledOnMS != 0 && this.r.ledOffMS != 0;
      r = this.r;
      v7 = r.flags & 0xFFFFFFFE;
      if ( !v5 )
        v4 = 0;
      r.flags = v7 | v4;
      return this;
    }

    private android.support.v4.app.an a(int p0, int p1, boolean p2)
    {
      this.n = p0;
      this.o = p1;
      this.p = p2;
      return this;
    }

    private android.support.v4.app.an a(int p0, CharSequence p1, android.app.PendingIntent p2)
    {
      this.q.add(new android.support.v4.app.ak(p0, p1, p2));
      return this;
    }

    private android.support.v4.app.an a(long p0)
    {
      this.r.when = p0;
      return this;
    }

    private android.support.v4.app.an a(android.app.PendingIntent p0)
    {
      this.d = p0;
      return this;
    }

    private android.support.v4.app.an a(android.app.PendingIntent p0, boolean p1)
    {
      this.e = p0;
      this.a(128, p1);
      return this;
    }

    private android.support.v4.app.an a(android.graphics.Bitmap p0)
    {
      this.g = p0;
      return this;
    }

    private android.support.v4.app.an a(android.net.Uri p0)
    {
      this.r.sound = p0;
      this.r.audioStreamType = -1;
      return this;
    }

    private android.support.v4.app.an a(android.net.Uri p0, int p1)
    {
      this.r.sound = p0;
      this.r.audioStreamType = p1;
      return this;
    }

    private android.support.v4.app.an a(android.widget.RemoteViews p0)
    {
      this.r.contentView = p0;
      return this;
    }

    private android.support.v4.app.an a(CharSequence p0)
    {
      this.b = p0;
      return this;
    }

    private android.support.v4.app.an a(CharSequence p0, android.widget.RemoteViews p1)
    {
      this.r.tickerText = p0;
      this.f = p1;
      return this;
    }

    private android.support.v4.app.an a(boolean p0)
    {
      this.k = p0;
      return this;
    }

    private android.support.v4.app.an a(long[] p0)
    {
      this.r.vibrate = p0;
      return this;
    }

    private void a(int p0, boolean p1)
    {
      android.app.Notification r;
      int v4;
      r = this.r;
      if ( p1 )
        v4 = r.flags | p0;
      else
        v4 = r.flags & ~p0;
      r.flags = v4;
    }

    private android.app.Notification b()
    {
      return NotificationCompat.access$000().a(this);
    }

    private android.support.v4.app.an b(int p0)
    {
      this.i = p0;
      return this;
    }

    private android.support.v4.app.an b(android.app.PendingIntent p0)
    {
      this.r.deleteIntent = p0;
      return this;
    }

    private android.support.v4.app.an b(CharSequence p0)
    {
      this.c = p0;
      return this;
    }

    private android.support.v4.app.an b(boolean p0)
    {
      this.a(2, p0);
      return this;
    }

    private android.support.v4.app.an c(int p0)
    {
      android.app.Notification r;
      this.r.defaults = p0;
      if ( (p0 & 4) != 0 )
      {
        r = this.r;
        r.flags |= 1;
      }
      return this;
    }

    private android.support.v4.app.an c(CharSequence p0)
    {
      this.m = p0;
      return this;
    }

    private android.support.v4.app.an c(boolean p0)
    {
      this.a(8, p0);
      return this;
    }

    private android.support.v4.app.an d(int p0)
    {
      this.j = p0;
      return this;
    }

    private android.support.v4.app.an d(CharSequence p0)
    {
      this.h = p0;
      return this;
    }

    private android.support.v4.app.an d(boolean p0)
    {
      this.a(16, p0);
      return this;
    }

    private android.support.v4.app.an e(CharSequence p0)
    {
      this.r.tickerText = p0;
      return this;
    }

    public final android.app.Notification a()
    {
      return NotificationCompat.access$000().a(this);
    }

    public final android.support.v4.app.an a(android.support.v4.app.au p0)
    {
      if ( this.l != p0 )
      {
        this.l = p0;
        if ( this.l != null )
          this.l.a(this);
      }
      return this;
    }

}
