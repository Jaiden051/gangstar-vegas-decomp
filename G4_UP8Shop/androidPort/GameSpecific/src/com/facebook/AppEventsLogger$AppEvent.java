// Decompiled from classes.dex (SourceFile: AppEventsLogger$AppEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.Logger;
import com.facebook.internal.Utility;
class AppEventsLogger$AppEvent implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private static final java.util.HashSet validatedIdentifiers;
    private boolean isImplicit;
    private org.json.JSONObject jsonObject;
    private java.lang.String name;

    // Methods
    static
    {
      validatedIdentifiers = new java.util.HashSet();
    }

    public AppEventsLogger$AppEvent(android.content.Context p0, String p1, Double p2, android.os.Bundle p3, boolean p4)
    {
      super();
      String AppVersion; // RETVAL
      java.util.Iterator v7;
      String v8;
      Object v9; // RETVAL
      Object[] v10;
      Object[] v12;
      Object[] v14;
      Object[] v15;
      try
      {
        this.validateIdentifier(p1);
        this.name = p1;
        this.isImplicit = p4;
        this.jsonObject = new org.json.JSONObject();
        this.jsonObject.put("_eventName", p1);
        this.jsonObject.put("_logTime", System.currentTimeMillis() / 1000);
        this.jsonObject.put("_ui", Utility.getActivityName(p0));
        if ( p2 != null )
          this.jsonObject.put("_valueToSum", p2.doubleValue());
        if ( this.isImplicit )
          this.jsonObject.put("_implicitlyLogged", "1");
        AppVersion = Settings.getAppVersion();
        if ( AppVersion != null )
          this.jsonObject.put("_appVersion", AppVersion);
        if ( p3 != null )
        {
          v7 = p3.keySet().iterator();
          while ( v7.hasNext() )
          {
            v8 = (String)v7.next();
            this.validateIdentifier(v8);
            v9 = p3.get(v8);
            if ( !(v9 instanceof String) && !(v9 instanceof Number) )
            {
              v10 = new Object[2];
              v10[0] = v9;
              v10[1] = v8;
              throw new com.facebook.FacebookException(String.format(
                                                         "Parameter value '%s' for key '%s' should be a string or a numeric type.",
                                                         v10));
            }
            this.jsonObject.put(v8, v9.toString());
          }
        }
        if ( !this.isImplicit )
        {
          v15 = new Object[1];
          v15[0] = this.jsonObject.toString();
          Logger.log(LoggingBehavior.APP_EVENTS, "AppEvents", "Created app event '%s'", v15);
        }
      }
      catch ( org.json.JSONException v11 )
      {
        v12 = new Object[1];
        v12[0] = v11.toString();
        Logger.log(LoggingBehavior.APP_EVENTS, "AppEvents", "JSON encoding for app event failed: '%s'", v12);
        this.jsonObject = null;
        return;
      }
      catch ( com.facebook.FacebookException v13 )
      {
        v14 = new Object[1];
        v14[0] = v13.toString();
        Logger.log(LoggingBehavior.APP_EVENTS, "AppEvents", "Invalid app event name or parameter:", v14);
        this.jsonObject = null;
      }
    
    }

    private AppEventsLogger$AppEvent(String p0, boolean p1)
 throws org.json.JSONException {
      super();
      this.jsonObject = new org.json.JSONObject(p0);
      this.isImplicit = p1;
    }

    /* synthetic */ AppEventsLogger$AppEvent(String p0, boolean p1, com.facebook.AppEventsLogger$1 p2)
 throws org.json.JSONException {
      this(p0, p1);
    }

    private void validateIdentifier(String p0)
    {
      int v2;
      Object[] v3;
      java.util.HashSet v4;
      boolean v5;
      java.util.HashSet v6;
      Object[] v9;
      if ( p0 == null || p0.length() == 0 || (v2 = p0.length()) > 40 )
      {
        if ( p0 == null )
          p0 = "<None Provided>";
        v3 = new Object[2];
        v3[0] = p0;
        v3[1] = Integer.valueOf(40);
        throw new com.facebook.FacebookException(String.format("Identifier '%s' must be less than %d characters", v3));
      }
      v4 = validatedIdentifiers;
      synchronized ( v4 )
      {
        v5 = validatedIdentifiers.contains(p0);
      }
      if ( !v5 )
      {
        if ( !p0.matches("^[0-9a-zA-Z_]+[0-9a-zA-Z _-]*$") )
        {
          v9 = new Object[1];
          v9[0] = p0;
          throw new com.facebook.FacebookException(String.format(
                                                     "Skipping event named '%s' due to illegal name - must be under 40 chars " +
                                                     "and alphanumeric, _, - or space, and not start with a space or hyphen.",
                                                     v9));
        }
        v6 = validatedIdentifiers;
        synchronized ( v6 )
        {
          validatedIdentifiers.add(p0);
        }
      }
    }

    private Object writeReplace()
    {
      return new com.facebook.AppEventsLogger$AppEvent$SerializationProxyV1(this.jsonObject.toString(), this.isImplicit, null);
    }

    public boolean getIsImplicit()
    {
      return this.isImplicit;
    }

    public org.json.JSONObject getJSONObject()
    {
      return this.jsonObject;
    }

    public String getName()
    {
      return this.name;
    }

    public String toString()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = this.jsonObject.optString("_eventName");
      v1[1] = Boolean.valueOf(this.isImplicit);
      v1[2] = this.jsonObject.toString();
      return String.format("\"%s\", implicit: %b, json: %s", v1);
    }

}
