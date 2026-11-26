// Decompiled from classes.dex (SourceFile: TaskStackBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Build;
import android.support.v4.content.ContextCompat;
import android.util.Log;
public class TaskStackBuilder implements java.lang.Iterable {
    // Fields
    private static java.lang.String a;
    private static final android.support.v4.app.bc b;
    private final java.util.ArrayList c;
    private final android.content.Context d;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 11 )
        b = (android.support.v4.app.bc)new android.support.v4.app.bd();
      else
        b = (android.support.v4.app.bc)new android.support.v4.app.be();
    }

    private TaskStackBuilder(android.content.Context p0)
    {
      super();
      this.c = new java.util.ArrayList();
      this.d = p0;
    }

    private int a()
    {
      return this.c.size();
    }

    private android.app.PendingIntent a(int p0, int p1)
    {
      android.content.Intent[] v3;
      if ( this.c.isEmpty() )
        throw new IllegalStateException("No intents added to TaskStackBuilder; cannot getPendingIntent");
      v3 = (android.content.Intent[])this.c.toArray(new android.content.Intent[this.c.size()]);
      v3[0] = new android.content.Intent(v3[0]).addFlags(268484608);
      return b.a(this.d, v3, p0, p1, null);
    }

    private android.app.PendingIntent a(int p0, int p1, android.os.Bundle p2)
    {
      android.content.Intent[] v4;
      if ( this.c.isEmpty() )
        throw new IllegalStateException("No intents added to TaskStackBuilder; cannot getPendingIntent");
      v4 = (android.content.Intent[])this.c.toArray(new android.content.Intent[this.c.size()]);
      v4[0] = new android.content.Intent(v4[0]).addFlags(268484608);
      return b.a(this.d, v4, p0, p1, null);
    }

    private android.content.Intent a(int p0)
    {
      return (android.content.Intent)this.c.get(p0);
    }

    private android.support.v4.app.TaskStackBuilder a(android.app.Activity p0)
    {
      android.content.Intent v2;
      android.content.Intent ParentActivityIntent;
      android.content.ComponentName Component;
      v2 = null;
      if ( p0 instanceof android.support.v4.app.bb )
        v2 = ((android.support.v4.app.bb)p0).a();
      if ( v2 != null )
        ParentActivityIntent = v2;
      else
        ParentActivityIntent = NavUtils.getParentActivityIntent(p0);
      if ( ParentActivityIntent != null )
      {
        Component = ParentActivityIntent.getComponent();
        if ( Component == null )
          Component = ParentActivityIntent.resolveActivity(this.d.getPackageManager());
        this.a(Component);
        this.a(ParentActivityIntent);
      }
      return this;
    }

    private android.support.v4.app.TaskStackBuilder a(android.content.ComponentName p0)
    {
      int v2; // RETVAL
      int v3;
      android.content.Intent i;
      v2 = this.c.size();
      v3 = v2;
      try
      {
        for ( i = NavUtils.getParentActivityIntent(this.d, p0);
              i != null;
              i = NavUtils.getParentActivityIntent(this.d, i.getComponent()) )
        {
          this.c.add(v3, i);
        }
        return this;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException v5 )
      {
        Log.e("TaskStackBuilder", "Bad ComponentName while traversing activity parent metadata");
        throw new IllegalArgumentException(v5);
      }
    }

    private android.support.v4.app.TaskStackBuilder a(android.content.Intent p0)
    {
      this.c.add(p0);
      return this;
    }

    private android.support.v4.app.TaskStackBuilder a(Class<?> p0)
    {
      return this.a(new android.content.ComponentName(this.d, p0));
    }

    private void a(android.os.Bundle p0)
    {
      android.content.Intent[] v2;
      android.content.Intent v3;
      if ( this.c.isEmpty() )
        throw new IllegalStateException("No intents added to TaskStackBuilder; cannot startActivities");
      v2 = (android.content.Intent[])this.c.toArray(new android.content.Intent[this.c.size()]);
      v2[0] = new android.content.Intent(v2[0]).addFlags(268484608);
      if ( !ContextCompat.startActivities(this.d, v2, null) )
      {
        v3 = new android.content.Intent(v2[v2.length - 1]);
        v3.addFlags(0x10000000);
        this.d.startActivity(v3);
      }
    }

    private android.content.Intent b(int p0)
    {
      return (android.content.Intent)this.c.get(p0);
    }

    private android.support.v4.app.TaskStackBuilder b(android.content.Intent p0)
    {
      android.content.ComponentName Component;
      Component = p0.getComponent();
      if ( Component == null )
        Component = p0.resolveActivity(this.d.getPackageManager());
      if ( Component != null )
        this.a(Component);
      this.a(p0);
      return this;
    }

    private void b()
    {
      android.content.Intent[] v1;
      android.content.Intent v2;
      if ( this.c.isEmpty() )
        throw new IllegalStateException("No intents added to TaskStackBuilder; cannot startActivities");
      v1 = (android.content.Intent[])this.c.toArray(new android.content.Intent[this.c.size()]);
      v1[0] = new android.content.Intent(v1[0]).addFlags(268484608);
      if ( !ContextCompat.startActivities(this.d, v1, null) )
      {
        v2 = new android.content.Intent(v1[v1.length - 1]);
        v2.addFlags(0x10000000);
        this.d.startActivity(v2);
      }
    }

    private android.content.Intent[] c()
    {
      android.content.Intent[] v1;
      int i;
      v1 = new android.content.Intent[this.c.size()];
      if ( v1.length == 0 )
        return (android.content.Intent[])v1;
      v1[0] = new android.content.Intent((android.content.Intent)this.c.get(0)).addFlags(268484608);
      for ( i = 1; i < v1.length; ++i )
        v1[i] = new android.content.Intent((android.content.Intent)this.c.get(i));
      return (android.content.Intent[])v1;
    }

    public static android.support.v4.app.TaskStackBuilder create(android.content.Context p0)
    {
      return new android.support.v4.app.TaskStackBuilder(p0);
    }

    public static android.support.v4.app.TaskStackBuilder from(android.content.Context p0)
    {
      return create(p0);
    }

    public java.util.Iterator<android.content.Intent> iterator()
    {
      return this.c.iterator();
    }

}
