// Decompiled from classes.dex (SourceFile: ai.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.support.v4.content.IntentCompat;
import android.util.Log;
class ai implements android.support.v4.app.ah {
    // Methods
    ai()
    {
      super();
    }

    public android.content.Intent a(android.app.Activity p0)
    {
      android.content.Intent MainActivity;
      String ParentActivityName; // RETVAL
      String v4;
      android.content.ComponentName v6;
      MainActivity = null;
      ParentActivityName = NavUtils.getParentActivityName(p0);
      v4 = ParentActivityName;
      if ( ParentActivityName != null )
      {
        v6 = new android.content.ComponentName(p0, ParentActivityName);
        try
        {
          if ( NavUtils.getParentActivityName(p0, v6) != null )
            return new android.content.Intent().setComponent(v6);
          MainActivity = IntentCompat.makeMainActivity(v6);
        }
        catch ( android.content.pm.PackageManager.NameNotFoundException e )
        {
          Log.e("NavUtils", "getParentActivityIntent: bad parentActivityName '" + v4 + "' in manifest");
        }
      }
      return MainActivity;
    }

    public String a(android.content.Context p0, android.content.pm.ActivityInfo p1)
    {
      String v3;
      String String; // RETVAL
    
      if ( p1.metaData == null )
        return null;
      String = p1.metaData.getString("android.support.PARENT_ACTIVITY");
      v3 = String;
      if ( String == null )
        return null;
      if ( String.charAt(0) == 46 )
        return p0.getPackageName() + v3;
      return v3;
    }

    public boolean a(android.app.Activity p0, android.content.Intent p1)
    {
      String Action; // RETVAL
    
      Action = p0.getIntent().getAction();
      return Action != null && !Action.equals("android.intent.action.MAIN");
    }

    public void b(android.app.Activity p0, android.content.Intent p1)
    {
      p1.addFlags(0x4000000);
      p0.startActivity(p1);
      p0.finish();
    }

}
