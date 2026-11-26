// Decompiled from classes.dex (SourceFile: FacebookAppLinkResolver$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.model.GraphObject;
import org.json.JSONObject;
class FacebookAppLinkResolver$2 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.FacebookAppLinkResolver this$0;
    final java.util.Map val$appLinkResults;
    final bolts.w val$taskCompletionSource;
    final java.util.HashSet val$urisToRequest;

    // Methods
    FacebookAppLinkResolver$2(com.facebook.FacebookAppLinkResolver p0, bolts.w p1, java.util.Map p2, java.util.HashSet p3)
    {
      super();
      this.this$0 = p0;
      this.val$taskCompletionSource = p1;
      this.val$appLinkResults = p2;
      this.val$urisToRequest = p3;
    
    }

    public void onCompleted(com.facebook.Response p0)
    {
      com.facebook.FacebookRequestError Error; // RETVAL
      com.facebook.model.GraphObject GraphObject; // RETVAL
      org.json.JSONObject InnerJSONObject;
      java.util.Iterator v5;
      android.net.Uri v6;
      org.json.JSONObject JSONObject;
      org.json.JSONArray JSONArray;
      int v9;
      java.util.List v10;
      int i;
      bolts.e v12; // RETVAL
      bolts.d v13;
      java.util.HashMap v14;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            Error = p0.getError();
            if ( Error != null )
            {
            this.val$taskCompletionSource.b(Error.getException());
            return;
            }
            GraphObject = p0.getGraphObject();
            if ( GraphObject != null )
            InnerJSONObject = GraphObject.getInnerJSONObject();
            else
            InnerJSONObject = null;
            if ( InnerJSONObject != null )
            {
            v5 = this.val$urisToRequest.iterator();
            while ( true )
            {
            do
            {
            if ( !v5.hasNext() )
            { _pc = 1; continue _sm; }
            v6 = (android.net.Uri)v5.next();
            }
            while ( !InnerJSONObject.has(v6.toString()) );
            try
            {
            JSONObject = InnerJSONObject.getJSONObject(v6.toString()).getJSONObject("app_links");
            JSONArray = JSONObject.getJSONArray("android");
            v9 = JSONArray.length();
            v10 = new java.util.ArrayList(v9);
            for ( i = 0; i < v9; ++i )
            {
            v12 = FacebookAppLinkResolver.access$000(JSONArray.getJSONObject(i));
            if ( v12 != null )
            v10.add(v12);
            }
            v13 = new bolts.d(v6, v10, FacebookAppLinkResolver.access$100(v6, JSONObject));
            this.val$appLinkResults.put(v6, v13);
            v14 = FacebookAppLinkResolver.access$200(this.this$0);
            synchronized ( v14 )
            {
            FacebookAppLinkResolver.access$200(this.this$0).put(v6, v13);
            }
            }
            catch ( org.json.JSONException e )
            {
            }
            }
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            this.val$taskCompletionSource.b(this.val$appLinkResults);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

}
