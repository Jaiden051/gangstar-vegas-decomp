// Decompiled from classes.dex (SourceFile: LocalBroadcastManager.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.util.Log;
public class LocalBroadcastManager {
    // Fields
    private static boolean DEBUG;
    static int MSG_EXEC_PENDING_BROADCASTS;
    private static java.lang.String TAG;
    private static android.support.v4.content.LocalBroadcastManager mInstance;
    private static final java.lang.Object mLock;
    private final java.util.HashMap mActions;
    private final android.content.Context mAppContext;
    private final android.os.Handler mHandler;
    private final java.util.ArrayList mPendingBroadcasts;
    private final java.util.HashMap mReceivers;

    // Methods
    static
    {
      mLock = new Object();
    }

    private LocalBroadcastManager(android.content.Context p0)
    {
      super();
      this.mReceivers = new java.util.HashMap();
      this.mActions = new java.util.HashMap();
      this.mPendingBroadcasts = new java.util.ArrayList();
      this.mAppContext = p0;
      this.mHandler = new android.support.v4.content.LocalBroadcastManager$1(this, p0.getMainLooper());
    }

    /* synthetic */ static void access$000(android.support.v4.content.LocalBroadcastManager p0)
    {
      p0.executePendingBroadcasts();
    }

    private void executePendingBroadcasts()
    {
      java.util.HashMap mReceivers = null;
      int v2 = 0; // RETVAL
      android.support.v4.content.LocalBroadcastManager$BroadcastRecord[] v3 = null;
      int i = 0;
      android.support.v4.content.LocalBroadcastManager$BroadcastRecord v5 = null;
      int j = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            mReceivers = this.mReceivers;
            synchronized ( mReceivers )
            {
            v2 = this.mPendingBroadcasts.size();
            if ( v2 > 0 )
            {
            v3 = new android.support.v4.content.LocalBroadcastManager$BroadcastRecord[v2];
            this.mPendingBroadcasts.toArray(v3);
            this.mPendingBroadcasts.clear();
            { _pc = 1; continue _sm; }
            }
            return;
            }
          case 1:
            for ( i = 0; i < v3.length; ++i )
            {
            v5 = v3[i];
            for ( j = 0; j < v5.receivers.size(); ++j )
            ((android.support.v4.content.LocalBroadcastManager$ReceiverRecord)v5.receivers.get(j)).receiver.onReceive(this.mAppContext, v5.intent);
            }
            _pc = 0;
            continue _sm;
        }
      }
}

    public static android.support.v4.content.LocalBroadcastManager getInstance(
            android.content.Context p0)
    {
      Object v1;
      v1 = mLock;
      synchronized ( v1 )
      {
        if ( mInstance == null )
          mInstance = new android.support.v4.content.LocalBroadcastManager(p0.getApplicationContext());
        return mInstance;
      }
    }

    public void registerReceiver(
            android.content.BroadcastReceiver p0,
            android.content.IntentFilter p1)
    {
      java.util.HashMap mReceivers;
      android.support.v4.content.LocalBroadcastManager$ReceiverRecord v4;
      java.util.ArrayList v5;
      int i;
      String Action;
      java.util.ArrayList v8;
      mReceivers = this.mReceivers;
      synchronized ( mReceivers )
      {
        v4 = new android.support.v4.content.LocalBroadcastManager$ReceiverRecord(p1, p0);
        v5 = (java.util.ArrayList)this.mReceivers.get(p0);
        if ( v5 == null )
        {
          v5 = new java.util.ArrayList(1);
          this.mReceivers.put(p0, v5);
        }
        v5.add(p1);
        for ( i = 0; i < p1.countActions(); ++i )
        {
          Action = p1.getAction(i);
          v8 = (java.util.ArrayList)this.mActions.get(Action);
          if ( v8 == null )
          {
            v8 = new java.util.ArrayList(1);
            this.mActions.put(Action, v8);
          }
          v8.add(v4);
        }
      }
    }

    public boolean sendBroadcast(android.content.Intent p0)
    {
      java.util.HashMap mReceivers = null;
      String Action = null;
      String v4 = null;
      android.net.Uri Data = null;
      String Scheme = null;
      java.util.Set Categories = null;
      boolean v8 = false;
      java.util.ArrayList v9 = null;
      java.util.ArrayList v10 = null;
      java.util.ArrayList v11 = null;
      int i = 0;
      android.support.v4.content.LocalBroadcastManager$ReceiverRecord v13 = null;
      java.util.ArrayList v14 = null;
      int v15 = 0; // RETVAL
      String v17 = null;
      int j = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            mReceivers = this.mReceivers;
            com.gameloft.android.DecompRT.monitorEnter(mReceivers);
            Action = p0.getAction();
            v4 = p0.resolveTypeIfNeeded(this.mAppContext.getContentResolver());
            Data = p0.getData();
            Scheme = p0.getScheme();
            Categories = p0.getCategories();
            v8 = (p0.getFlags() & 8) != 0;
            if ( v8 )
            Log.v("LocalBroadcastManager", "Resolving type " + v4 + " scheme " + Scheme + " of intent " + p0);
            v9 = (java.util.ArrayList)this.mActions.get(p0.getAction());
            v10 = v9;
            if ( v9 == null )
            return false;
            if ( v8 )
            Log.v("LocalBroadcastManager", "Action list: " + v9);
            v11 = null;
            i = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( i >= v10.size() )
            {
            if ( v11 != null )
            {
            for ( j = 0; j < v11.size(); ++j )
            ((android.support.v4.content.LocalBroadcastManager$ReceiverRecord)v11.get(j)).broadcasting = false;
            this.mPendingBroadcasts.add(new android.support.v4.content.LocalBroadcastManager$BroadcastRecord(p0, v11));
            if ( !this.mHandler.hasMessages(1) )
            this.mHandler.sendEmptyMessage(1);
            return true;
            }
            return false;
            }
            v13 = (android.support.v4.content.LocalBroadcastManager$ReceiverRecord)v10.get(i);
            if ( v8 )
            Log.v("LocalBroadcastManager", "Matching against filter " + v13.filter);
            if ( !(v13.broadcasting) ) { _pc = 2; continue _sm; }
            _pc = 7;
            continue _sm;
          case 2:
            v15 = v13.filter.match(Action, v4, Scheme, Data, Categories, "LocalBroadcastManager");
            if ( !(v15 < 0) ) { _pc = 4; continue _sm; }
            if ( v8 )
            {
            switch ( v15 )
            {
            case -4:
            v17 = "category";
            break;
            case -3:
            v17 = "action";
            break;
            case -2:
            v17 = "data";
            break;
            case -1:
            v17 = "type";
            break;
            default:
            v17 = "unknown reason";
            break;
            }
            Log.v("LocalBroadcastManager", "  Filter did not match: " + v17);
            }
            _pc = 3;
            continue _sm;
          case 3:
            v14 = v11;
            _pc = 5;
            continue _sm;
          case 4:
            if ( v8 )
            Log.v("LocalBroadcastManager", "  Filter matched!  match=0x" + Integer.toHexString(v15));
            if ( v11 != null )
            v14 = v11;
            else
            v14 = new java.util.ArrayList();
            v14.add(v13);
            v13.broadcasting = true;
            _pc = 5;
            continue _sm;
          case 5:
            v11 = v14;
            _pc = 6;
            continue _sm;
          case 6:
            ++i;
            _pc = 1;
            continue _sm;
          case 7:
            if ( v8 )
            {
            Log.v("LocalBroadcastManager", "  Filter's target already added");
            v14 = v11;
            { _pc = 5; continue _sm; }
            }
            _pc = 3;
            continue _sm;
        }
      }
}

    public void sendBroadcastSync(android.content.Intent p0)
    {
      if ( this.sendBroadcast(p0) )
        this.executePendingBroadcasts();
    }

    public void unregisterReceiver(android.content.BroadcastReceiver p0)
    {
      java.util.HashMap mReceivers;
      java.util.ArrayList v3;
      int i;
      android.content.IntentFilter v5;
      int j;
      String Action;
      java.util.ArrayList v8;
      int k;
      int v10;
      mReceivers = this.mReceivers;
      synchronized ( mReceivers )
      {
        v3 = (java.util.ArrayList)this.mReceivers.remove(p0);
        if ( v3 != null )
        {
          for ( i = 0; i < v3.size(); ++i )
          {
            v5 = (android.content.IntentFilter)v3.get(i);
            for ( j = 0; j < v5.countActions(); ++j )
            {
              Action = v5.getAction(j);
              v8 = (java.util.ArrayList)this.mActions.get(Action);
              if ( v8 != null )
              {
                for ( k = 0; k < v8.size(); k = v10 + 1 )
                {
                  if ( ((android.support.v4.content.LocalBroadcastManager$ReceiverRecord)v8.get(k)).receiver == p0 )
                  {
                    v8.remove(k);
                    v10 = k - 1;
                  }
                  else
                  {
                    v10 = k;
                  }
                }
                if ( v8.size() <= 0 )
                  this.mActions.remove(Action);
              }
            }
          }
        }
        return;
      }
    }

}
