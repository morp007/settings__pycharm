#macro( includeGuard $filename $ext )
#set( $ucfull = ${filename.toUpperCase().replace('-', '_')} )
#set( $extidx = ${ucfull.lastIndexOf(".")} )
#set( $extstart = $extidx + 1 )
#if( $extidx > -1 )
#set( $ucname = ${ucfull.substring(0,$extidx)} )
#set( $ucext = ${ucfull.substring($extstart)} )
#else
#set( $ucname = $!{ucfull} )
#set( $ucext = ${ext.toUpperCase()} )
#end
${ucname}_${ucext}##
#end##