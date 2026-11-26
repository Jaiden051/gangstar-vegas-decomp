// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import android.os.Message;
public final class f {
    // Fields
    private android.database.sqlite.SQLiteDatabase a;
    private com.gameloft.android.GAND.GloftGGSS.PushNotification.g b;
    private java.lang.String[] c;
    private java.lang.String[] d;

    // Methods
    public f(android.content.Context p0)
    {
      super();
      String[] v2;
      String[] v3;
      v2 = new String[7];
      v2[0] = "_id";
      v2[1] = "pn_alarm_id";
      v2[2] = "creation_time";
      v2[3] = "schedule_time";
      v2[4] = "message_group";
      v2[5] = "type";
      v2[6] = "message_content";
      this.c = v2;
      v3 = new String[3];
      v3[0] = "_id";
      v3[1] = "transport";
      v3[2] = "registration_id";
      this.d = v3;
      this.b = new com.gameloft.android.GAND.GloftGGSS.PushNotification.g(p0);
    
    }

    private void b()
    {
      try
      {
        this.b.close();
      }
      catch ( Exception e )
      {
      }
    }

    public final void a()
    {
      try
      {
        this.a = this.b.getWritableDatabase();
      }
      catch ( android.database.SQLException e )
      {
      }
    }

    public final void a(android.content.ContentValues p0)
    {
      android.database.Cursor v2;
      try
      {
        v2 = this.a.query("Message", this.c, "_id = " + this.a.insert("Message", null, p0), null, null, null, null);
        v2.moveToFirst();
        v2.close();
      }
      catch ( Exception e )
      {
      }
    }

    public final void a(String p0, String p1)
    {
      String[] v3;
      try
      {
        v3 = new String[1];
        v3[0] = p1;
        this.a.delete("Message", p0 + "=?", v3);
      }
      catch ( Exception e )
      {
      }
    }

    public final void b(android.content.ContentValues p0)
    {
      try
      {
        this.a.replace("Endpoint", null, p0);
      }
      catch ( Exception e )
      {
      }
    }

}
