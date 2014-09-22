<h1>Shoot</h1>
=====

A library helps students visualize their tree structure easily<br>

-----

<h3>Pruopse</h3>
<p style="margin: 0px 0px 10px 20px;">
&nbsp;&nbsp;&nbsp;&nbsp;Are you doing some assignment about tree structure from class, and don't know how to represents your tree structure in an elegent way?<br>
&nbsp;&nbsp;&nbsp;&nbsp;Shoot can help you! Shoot is a library which can automatically build a tree structure with your web browser.<br>
</p>

<h3>How does it looks like?</h3>
<p style="margin: 0px 0px 10px 20px;">
&nbsp;&nbsp;&nbsp;&nbsp;It drew like this:<br>
<img src="https://i.imgur.com/H2JOKLj.png"/><br>
&nbsp;&nbsp;&nbsp;&nbsp;If you know about CSS, you can change style by yourself.<br>
</p>
  
<h3>How to add this feature into my project?</h3>
<p style="margin: 0px 0px 10px 20px;">
&nbsp;&nbsp;&nbsp;&nbsp;<b>1.</b> Clone files from shoot/Packing to your project.<br>
&nbsp;&nbsp;&nbsp;&nbsp;<b>2.</b> Include "shoot.h" in your .cpp file.<br>
&nbsp;&nbsp;&nbsp;&nbsp;<b>3.</b> Inherit your tree node class from shoot::TreeNode<br>
&nbsp;&nbsp;&nbsp;&nbsp;<b>4.</b> Implements some functions in your tree node class.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<s>YourTreeNode *sibling()</s> : no argument, return the pointer of this node's next sibling. If there is no next sibling you can return NULL instead.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<s>YourTreeNode *child()</s>   : no argument, return the pointer of this node's first child. If it don't have any child you can return NULL instead.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<s>bool hasSibling()</s>   : no argument, return a boolean that if this node has next sibling. If it is the last sibling in this generation, return false. Otherwise, return true.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<s>bool hasSibling()</s>   : no argument, return a boolean that if this node has any child. If it is the leaf node, return false. Else cases, return true.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<s>string getData()</s>    : no argument, return the data contained in this node in string type.<br>
&nbsp;&nbsp;&nbsp;&nbsp;<b>5.</b> Call the YourTreeNode->generate(filename) whenever you wanna produce a tree view.<br>
&nbsp;&nbsp;&nbsp;&nbsp;<b>6.</b> Compile your project with "shoot.o"<br>
&nbsp;&nbsp;&nbsp;&nbsp;<b>7.</b> Execute your outcome program.<br>
  <br>
&nbsp;&nbsp;&nbsp;&nbsp;Notify:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b>1.</b> The file "shoot.hd", shall be placed under the same folder as your executable program is.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b>2.</b> When you open the html file produced by "generate()", it needs internet connection.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;If you wanna make it work without connection. You need to download jquery from "http://jquery.com/download/" and put it under the same folder as "shoot.hd" is.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;And change the js link address at the first line in "shoot.hd"<br>
</p>

<h3>Example</h3>
<p style="margin: 0px 0px 10px 20px;">
There is an example at <a href="https://github.com/ire7715/shoot/blob/master/Example/example.cpp">"shoot/Example/example.cpp"</a>. Implements a simple pairingHeap.<br>
</p>
