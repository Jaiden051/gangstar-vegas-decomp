// Decompiled from classes.dex (SourceFile: cz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.content.Intent;
import android.os.Bundle;
public final class cz {
    // Methods
    public static int a(android.os.Bundle p0)
    {
      Object v1; // RETVAL
    
      v1 = p0.get("RESPONSE_CODE");
      if ( v1 != null )
      {
        if ( v1 instanceof Integer )
        {
          return ((Integer)v1).intValue();
        }
        else if ( v1 instanceof Long )
        {
          return (int)((Long)v1).longValue();
        }
        else
        {
          ev.D("Unexpected type for intent response code. " + v1.getClass().getName());
          return 5;
        }
      }
      else
      {
        ev.D("Bundle with null response code, assuming OK (known issue)");
        return 0;
      }
    }

    public static int c(android.content.Intent p0)
    {
      Object v1; // RETVAL
    
      v1 = p0.getExtras().get("RESPONSE_CODE");
      if ( v1 != null )
      {
        if ( v1 instanceof Integer )
        {
          return ((Integer)v1).intValue();
        }
        else if ( v1 instanceof Long )
        {
          return (int)((Long)v1).longValue();
        }
        else
        {
          ev.D("Unexpected type for intent response code. " + v1.getClass().getName());
          return 5;
        }
      }
      else
      {
        ev.D("Intent with no response code, assuming OK (known issue)");
        return 0;
      }
    }

    public static String d(android.content.Intent p0)
    {
      if ( p0 != null )
        return p0.getStringExtra("INAPP_PURCHASE_DATA");
      else
        return null;
    }

    public static String e(android.content.Intent p0)
    {
      if ( p0 != null )
        return p0.getStringExtra("INAPP_DATA_SIGNATURE");
      else
        return null;
    }

    public static String p(String p0)
    {
      String v1;
      v1 = null;
      if ( p0 != null )
      {
        try
        {
          return new org.json.JSONObject(p0).getString("developerPayload");
        }
        catch ( org.json.JSONException e )
        {
          ev.D("Fail to parse purchase data");
        }
      }
      return v1;
    }

    public static String q(String p0)
    {
      String v1;
      v1 = null;
      if ( p0 != null )
      {
        try
        {
          return new org.json.JSONObject(p0).getString("purchaseToken");
        }
        catch ( org.json.JSONException e )
        {
          ev.D("Fail to parse purchase data");
        }
      }
      return v1;
    }

}
