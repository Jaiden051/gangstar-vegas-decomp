// Decompiled from classes.dex (SourceFile: Utility$DialogFeatureConfig.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.net.Uri;
public class Utility$DialogFeatureConfig {
    // Fields
    private java.lang.String dialogName;
    private android.net.Uri fallbackUrl;
    private java.lang.String featureName;
    private int[] featureVersionSpec;

    // Methods
    private Utility$DialogFeatureConfig(String p0, String p1, android.net.Uri p2, int[] p3)
    {
      super();
      this.dialogName = p0;
      this.featureName = p1;
      this.fallbackUrl = p2;
      this.featureVersionSpec = (int[])p3;
    }

    /* synthetic */ static com.facebook.internal.Utility$DialogFeatureConfig access$400(
            org.json.JSONObject p0)
    {
      return parseDialogConfig(p0);
    }

    private static com.facebook.internal.Utility$DialogFeatureConfig parseDialogConfig(
            org.json.JSONObject p0)
    {
      android.net.Uri v1;
      String v2;
      String[] v4; // RETVAL
      String v5;
      String v6;
      String v7;
      v1 = null;
      v2 = p0.optString("name");
      if ( !Utility.isNullOrEmpty(v2) )
      {
        v4 = v2.split("\\|");
        if ( v4.length == 2 )
        {
          v5 = v4[0];
          v6 = v4[1];
          if ( !Utility.isNullOrEmpty(v5) && !Utility.isNullOrEmpty(v6) )
          {
            v7 = p0.optString("url");
            if ( !Utility.isNullOrEmpty(v7) )
              v1 = Uri.parse(v7);
            return new com.facebook.internal.Utility$DialogFeatureConfig(v5, v6, v1, parseVersionSpec(p0.optJSONArray("versions")));
          }
        }
      }
      return (com.facebook.internal.Utility$DialogFeatureConfig)(Object)v1;
    }

    private static int[] parseVersionSpec(org.json.JSONArray p0)
    {
      int[] v1;
      int v2;
      int[] v3;
      int i;
      int v5;
      String v6;
      v1 = null;
      if ( p0 != null )
      {
        v2 = p0.length();
        v3 = new int[v2];
        for ( i = 0; ; ++i )
        {
          if ( i >= v2 )
            return (int[])v3;
          v5 = p0.optInt(i, -1);
          if ( v5 == -1 )
          {
            v6 = p0.optString(i);
            if ( !Utility.isNullOrEmpty(v6) )
            {
              try
              {
                v5 = Integer.parseInt(v6);
              }
              catch ( NumberFormatException v7 )
              {
                Utility.logd("GAME", v7);
                v5 = -1;
              }
            }
          }
          v3[i] = v5;
        }
      }
      return (int[])v1;
    }

    public String getDialogName()
    {
      return this.dialogName;
    }

    public android.net.Uri getFallbackUrl()
    {
      return this.fallbackUrl;
    }

    public String getFeatureName()
    {
      return this.featureName;
    }

    public int[] getVersionSpec()
    {
      return this.featureVersionSpec;
    }

}
