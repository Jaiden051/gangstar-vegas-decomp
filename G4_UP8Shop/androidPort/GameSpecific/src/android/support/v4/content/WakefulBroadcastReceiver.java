// Decompiled from classes.dex (SourceFile: WakefulBroadcastReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.util.Log;
public abstract class WakefulBroadcastReceiver extends android.content.BroadcastReceiver {
    // Fields
    private static java.lang.String EXTRA_WAKE_LOCK_ID;
    private static final android.util.SparseArray mActiveWakeLocks;
    private static int mNextId;

    // Methods
    static
    {
      mActiveWakeLocks = new android.util.SparseArray();
      mNextId = 1;
    }

    public WakefulBroadcastReceiver()
    {
      super();
    }

    public static boolean completeWakefulIntent(android.content.Intent p0)
    {
      boolean v1;
      int IntExtra; // RETVAL
      int v3;
      android.util.SparseArray v5;
      android.os.PowerManager.WakeLock v6;
      v1 = false;
      IntExtra = p0.getIntExtra("android.support.content.wakelockid", 0);
      v3 = IntExtra;
      if ( IntExtra != 0 )
      {
        v5 = mActiveWakeLocks;
        synchronized ( v5 )
        {
          v6 = (android.os.PowerManager.WakeLock)mActiveWakeLocks.get(IntExtra);
          if ( v6 == null )
          {
            Log.w("WakefulBroadcastReceiver", "No active wake lock id #" + v3);
            return true;
          }
          v6.release();
          mActiveWakeLocks.remove(v3);
          v1 = true;
        }
      }
      return v1;
    }

    public static android.content.ComponentName startWakefulService(
            android.content.Context p0,
            android.content.Intent p1)
    {
      android.util.SparseArray v2;
      int v3;
      android.content.ComponentName started;
      android.os.PowerManager.WakeLock v7; // RETVAL
    
      v2 = mActiveWakeLocks;
      synchronized ( v2 )
      {
        v3 = mNextId;
        mNextId = v3 + 1;
        if ( v3 + 1 <= 0 )
          mNextId = 1;
        p1.putExtra("android.support.content.wakelockid", v3);
        started = p0.startService(p1);
        if ( started == null )
          return null;
        v7 = ((android.os.PowerManager)p0.getSystemService("power")).newWakeLock(1, "wake:" + started.flattenToShortString());
        v7.setReferenceCounted(false);
        v7.acquire(60000);
        mActiveWakeLocks.put(v3, v7);
        return started;
      }
    }

}
