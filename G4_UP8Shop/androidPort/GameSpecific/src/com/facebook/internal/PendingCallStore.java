// Decompiled from classes.dex (SourceFile: PendingCallStore.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public class PendingCallStore {
    // Fields
    private static java.lang.String CALL_ID_ARRAY_KEY;
    private static java.lang.String CALL_KEY_PREFIX;
    private static com.facebook.internal.PendingCallStore mInstance;
    private java.util.Map pendingCallMap;

    // Methods
    public PendingCallStore()
    {
      super();
      this.pendingCallMap = new java.util.HashMap();
    }

    private static synchronized void createInstance()
    {
      if ( mInstance == null )
        mInstance = new com.facebook.internal.PendingCallStore();
    }

    public static com.facebook.internal.PendingCallStore getInstance()
    {
      if ( mInstance == null )
        createInstance();
      return mInstance;
    }

    private String getSavedStateKeyForPendingCallId(String p0)
    {
      return "com.facebook.internal.PendingCallStore." + p0;
    }

    public com.facebook.widget.FacebookDialog$PendingCall getPendingCallById(java.util.UUID p0)
    {
      if ( p0 != null )
        return (com.facebook.widget.FacebookDialog$PendingCall)this.pendingCallMap.get(p0.toString());
      else
        return null;
    }

    public void restoreFromSavedInstanceState(android.os.Bundle p0)
    {
      java.util.ArrayList StringArrayList; // RETVAL
      java.util.Iterator v3;
      com.facebook.widget.FacebookDialog$PendingCall v4;
      StringArrayList = p0.getStringArrayList("com.facebook.internal.PendingCallStore.callIdArrayKey");
      if ( StringArrayList != null )
      {
        v3 = StringArrayList.iterator();
        while ( v3.hasNext() )
        {
          v4 = (com.facebook.widget.FacebookDialog$PendingCall)p0.getParcelable(this.getSavedStateKeyForPendingCallId((String)v3.next()));
          if ( v4 != null )
            this.pendingCallMap.put(v4.getCallId().toString(), v4);
        }
      }
    }

    public void saveInstanceState(android.os.Bundle p0)
    {
      java.util.Iterator v2;
      com.facebook.widget.FacebookDialog$PendingCall v3;
      p0.putStringArrayList("com.facebook.internal.PendingCallStore.callIdArrayKey", new java.util.ArrayList(this.pendingCallMap.keySet()));
      v2 = this.pendingCallMap.values().iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.facebook.widget.FacebookDialog$PendingCall)v2.next();
        p0.putParcelable(this.getSavedStateKeyForPendingCallId(v3.getCallId().toString()), (android.os.Parcelable)v3);
      }
    }

    public void stopTrackingPendingCall(java.util.UUID p0)
    {
      if ( p0 != null )
        this.pendingCallMap.remove(p0.toString());
    }

    public void trackPendingCall(com.facebook.widget.FacebookDialog$PendingCall p0)
    {
      if ( p0 != null )
        this.pendingCallMap.put(p0.getCallId().toString(), p0);
    }

}
