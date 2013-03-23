package nationstates-client-nsapi;
$LEVEL = 1

sub getnationdata {
    $nationname = @_[0];
    $urlrequeststring = geturlrequests();
    $nationurl = "http://www.nationstates.net/cgi-bin/api.cgi?nation=$nationname\&q=$urlrequeststring";
    # TODO: Actually download and parse an XML file from the generated URL
}

sub geturlrequests {
    open(urlrequests,'<',"$datapath/url_requests.txt") or die "Couldn\'t open url_requests.txt!";
    $tempstring = "";
    $stringbuildinit = 1;
    while(<urlrequests>){
        if $stringbuildinit == 1 {
            $tempstring = $tempstring . $_;
            $stringbuildinit = 0;
        } else {
            $tempstring = $tempstring . "+" . $_;
        }
    }
    return $tempstring;
}
