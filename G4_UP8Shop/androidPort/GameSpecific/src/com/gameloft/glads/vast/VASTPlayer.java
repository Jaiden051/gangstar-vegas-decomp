// Decompiled from classes.dex (SourceFile: VASTPlayer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast;

import com.gameloft.glads.vast.util.NetworkTools;
import com.gameloft.glads.vast.util.VASTLog;
public class VASTPlayer {
    // Fields
    public static int ERROR_EXCEEDED_WRAPPER_LIMIT;
    public static int ERROR_NONE;
    public static int ERROR_NO_NETWORK;
    public static int ERROR_POST_VALIDATION;
    public static int ERROR_SCHEMA_VALIDATION;
    public static int ERROR_VIDEO_PLAYBACK;
    public static int ERROR_XML_OPEN_OR_READ;
    public static int ERROR_XML_PARSE;
    private static java.lang.String TAG;
    public static java.lang.String VERSION;
    public static com.gameloft.glads.vast.VASTPlayer$VASTPlayerListener listener;
    private android.content.Context context;
    private com.gameloft.glads.vast.model.VASTModel vastModel;

    // Methods
    public VASTPlayer(android.content.Context p0, com.gameloft.glads.vast.VASTPlayer$VASTPlayerListener p1)
    {
      super();
      this.context = p0;
      listener = p1;
    }

    /* synthetic */ static void access$000(com.gameloft.glads.vast.VASTPlayer p0, int p1)
    {
      p0.sendError(p1);
    }

    /* synthetic */ static android.content.Context access$100(com.gameloft.glads.vast.VASTPlayer p0)
    {
      return p0.context;
    }

    /* synthetic */ static com.gameloft.glads.vast.model.VASTModel access$202(
            com.gameloft.glads.vast.VASTPlayer p0,
            com.gameloft.glads.vast.model.VASTModel p1)
    {
      p0.vastModel = p1;
      return p1;
    }

    /* synthetic */ static void access$300(com.gameloft.glads.vast.VASTPlayer p0)
    {
      p0.sendReady();
    }

    private void sendClosed()
    {
      VASTLog.d("VASTPlayer", "sendClosed");
      if ( listener != null )
        ((android.app.Activity)this.context).runOnUiThread((Runnable)new com.gameloft.glads.vast.VASTPlayer$3(this));
    }

    private void sendError(int p0)
    {
      VASTLog.d("VASTPlayer", "sendError");
      if ( listener != null )
        ((android.app.Activity)this.context).runOnUiThread((Runnable)new com.gameloft.glads.vast.VASTPlayer$5(this, p0));
    }

    private void sendReady()
    {
      VASTLog.d("VASTPlayer", "sendReady");
      if ( listener != null )
        ((android.app.Activity)this.context).runOnUiThread((Runnable)new com.gameloft.glads.vast.VASTPlayer$4(this));
    }

    public void loadVideoWithData(String p0)
    {
      VASTLog.v("VASTPlayer", "loadVideoWithData\n" + p0);
      this.vastModel = null;
      if ( NetworkTools.connectedToInternet(this.context) )
        new Thread((Runnable)new com.gameloft.glads.vast.VASTPlayer$2(this, p0)).start();
      else
        this.sendError(1);
    }

    public void loadVideoWithUrl(String p0)
    {
      VASTLog.d("VASTPlayer", "loadVideoWithUrl " + p0);
      this.vastModel = null;
      if ( NetworkTools.connectedToInternet(this.context) )
        new Thread((Runnable)new com.gameloft.glads.vast.VASTPlayer$1(this, p0)).start();
      else
        this.sendError(1);
    }

    public void play()
    {
      android.content.Intent v1;
      VASTLog.d("VASTPlayer", "play");
      if ( this.vastModel != null )
      {
        if ( NetworkTools.connectedToInternet(this.context) )
        {
          v1 = new android.content.Intent(this.context, com.gameloft.glads.vast.activity.VASTActivity.class);
          v1.putExtra("com.nexage.android.vast.player.vastModel", (java.io.Serializable)this.vastModel);
          this.context.startActivity(v1);
        }
        else
        {
          this.sendError(1);
        }
      }
      else
      {
        VASTLog.w("VASTPlayer", "vastModel is null; nothing to play");
      }
    }

}
