// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.text.TextUtils;
abstract class k<T extends com.google.android.gms.analytics.j> {
    // Fields
    android.content.Context a;
    com.google.android.gms.analytics.k$a b;

    // Methods
    public k(android.content.Context p0, com.google.android.gms.analytics.k$a<T> p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    private T a(android.content.res.XmlResourceParser p0)
    {
      int i;
      String v3;
      String AttributeValue;
      String v5;
      String v6;
      String v7;
      String v10;
      String v11;
      String v13;
      String v14;
      try
      {
        p0.next();
        for ( i = p0.getEventType(); i != 1; i = p0.next() )
        {
          if ( p0.getEventType() == 2 )
          {
            v3 = p0.getName().toLowerCase();
            if ( v3.equals("screenname") )
            {
              AttributeValue = p0.getAttributeValue(null, "name");
              v5 = p0.nextText().trim();
              if ( !TextUtils.isEmpty(AttributeValue) && !TextUtils.isEmpty(v5) )
                this.b.a(AttributeValue, v5);
            }
            else if ( v3.equals("string") )
            {
              v6 = p0.getAttributeValue(null, "name");
              v7 = p0.nextText().trim();
              if ( !TextUtils.isEmpty(v6) && v7 != null )
                this.b.b(v6, v7);
            }
            else if ( v3.equals("bool") )
            {
              v10 = p0.getAttributeValue(null, "name");
              v11 = p0.nextText().trim();
              if ( !TextUtils.isEmpty(v10) && !TextUtils.isEmpty(v11) )
              {
                try
                {
                  this.b.a(v10, Boolean.parseBoolean(v11));
                }
                catch ( NumberFormatException e )
                {
                  aa.A("Error parsing bool configuration value: " + v11);
                }
              }
            }
            else if ( v3.equals("integer") )
            {
              v13 = p0.getAttributeValue(null, "name");
              v14 = p0.nextText().trim();
              if ( !TextUtils.isEmpty(v13) && !TextUtils.isEmpty(v14) )
              {
                try
                {
                  this.b.a(v13, Integer.parseInt(v14));
                }
                catch ( NumberFormatException e )
                {
                  aa.A("Error parsing int configuration value: " + v14);
                }
              }
            }
          }
        }
        return (T)this.b.a();
      }
      catch ( org.xmlpull.v1.XmlPullParserException v8 )
      {
        aa.A("Error parsing tracker configuration file: " + v8);
        return (T)this.b.a();
      }
      catch ( java.io.IOException v12 )
      {
        aa.A("Error parsing tracker configuration file: " + v12);
      }
      return (T)this.b.a();
    }

    public final T a(int p0)
    {
      try
      {
        return this.a(this.a.getResources().getXml(p0));
      }
      catch ( android.content.res.Resources.NotFoundException v4 )
      {
        aa.D("inflate() called with unknown resourceId: " + v4);
        return null;
      }
    }

}
