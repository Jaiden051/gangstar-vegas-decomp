// Decompiled from classes.dex (SourceFile: RequestAsyncTask.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.util.Log;
public class RequestAsyncTask extends android.os.AsyncTask<Void, Void, java.util.List<com.facebook.Response>> {
    // Fields
    private static final java.lang.String TAG;
    private static java.lang.reflect.Method executeOnExecutorMethod;
    private final java.net.HttpURLConnection connection;
    private java.lang.Exception exception;
    private final com.facebook.RequestBatch requests;

    // Methods
    static
    {
      java.lang.reflect.Method[] Methods;
      int v1;
      int i;
      java.lang.reflect.Method v3;
      Class[] ParameterTypes; // RETVAL
    
      TAG = com.facebook.RequestAsyncTask.class.getCanonicalName();
      Methods = android.os.AsyncTask.class.getMethods();
      v1 = Methods.length;
      for ( i = 0; i < v1; ++i )
      {
        v3 = Methods[i];
        if ( "executeOnExecutor".equals(v3.getName()) )
        {
          ParameterTypes = v3.getParameterTypes();
          if ( ParameterTypes.length == 2
            && ParameterTypes[0] == java.util.concurrent.Executor.class
            && ParameterTypes[1].isArray() )
          {
            executeOnExecutorMethod = v3;
            break;
          }
        }
      }
    }

    public RequestAsyncTask(com.facebook.RequestBatch p0)
    {
      this(null, p0);
    }

    public RequestAsyncTask(java.net.HttpURLConnection p0, com.facebook.RequestBatch p1)
    {
      super();
      this.requests = p1;
      this.connection = p0;
    }

    public RequestAsyncTask(java.net.HttpURLConnection p0, java.util.Collection<com.facebook.Request> p1)
    {
      this(p0, new com.facebook.RequestBatch(p1));
    }

    public RequestAsyncTask(java.net.HttpURLConnection p0, com.facebook.Request[] p1)
    {
      this(p0, new com.facebook.RequestBatch(p1));
    }

    public RequestAsyncTask(java.util.Collection<com.facebook.Request> p0)
    {
      this(null, new com.facebook.RequestBatch(p0));
    }

    public RequestAsyncTask(com.facebook.Request[] p0)
    {
      this(null, new com.facebook.RequestBatch(p0));
    }



    protected java.util.List<com.facebook.Response> doInBackground(Void[] p0)
    {
      try
      {
        if ( this.connection != null )
          return Request.executeConnectionAndWait(this.connection, this.requests);
        else
          return this.requests.executeAndWait();
      }
      catch ( Exception v4 )
      {
        this.exception = v4;
        return null;
      }
    }

    com.facebook.RequestAsyncTask executeOnSettingsExecutor()
    {
      Object[] v1;
      if ( executeOnExecutorMethod == null )
      {
        this.execute(new Void[0]);
        return this;
      }
      try
      {
        v1 = new Object[2];
        v1[0] = Settings.getExecutor();
        v1[1] = 0;
        executeOnExecutorMethod.invoke(this, v1);
        return this;
      }
      catch ( java.lang.reflect.InvocationTargetException e )
      {
        return this;
      }
      catch ( IllegalAccessException e )
      {
      }
      return this;
    }

    protected final Exception getException()
    {
      return this.exception;
    }

    protected final com.facebook.RequestBatch getRequests()
    {
      return this.requests;
    }



    protected void onPostExecute(java.util.List<com.facebook.Response> p0)
    {
      Object[] v2;
      super.onPostExecute(p0);
      if ( this.exception != null )
      {
        v2 = new Object[1];
        v2[0] = this.exception.getMessage();
        Log.d(TAG, String.format("onPostExecute: exception encountered during request: %s", v2));
      }
    }

    protected void onPreExecute()
    {
      super.onPreExecute();
      if ( this.requests.getCallbackHandler() == null )
        this.requests.setCallbackHandler(new android.os.Handler());
    }

    public String toString()
    {
      return "{RequestAsyncTask: " + " connection: " + this.connection + ", requests: " + this.requests + "}";
    }

}
